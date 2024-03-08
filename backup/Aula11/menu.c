#include <stdio.h>

struct TData{
    int dia, mes, ano;
};

struct TAlunos {
    char nome[50];
    struct TData dn;
};


struct TAlunos registros[100];
int reg_atual=0;

void incluir(){
    char data[12], lixo;
    printf("Cadastro do Aluno:\n");
    printf("\tDigite o nome: ");
    lixo = getchar();
    fgets(registros[reg_atual].nome, 50, stdin);
    registros[reg_atual].nome[strlen(registros[reg_atual].nome)-1] = '\0';
    printf("\tDigite a DN [dia/mes/ano]: ");
    scanf("%s", data);
    sscanf(data, "%d/%d/%d", &registros[reg_atual].dn.dia,
                            &registros[reg_atual].dn.mes,
                            &registros[reg_atual].dn.ano);
    reg_atual++;
}




int menu(){
    int op;
    printf("Registro de Alunos [%d]\n", reg_atual);
    printf("\t[1] - Incluir\n");
    printf("\t[2] - Editar\n");
    printf("\t[3] - Excluir\n");
    printf("\t[4] - Imprimir\n");
    printf("\t[0] - SAIR\n");
    printf("\n  Digite a Opcao: ");
    scanf("%d", &op);
    return op;
}


void editar(){
}
void excluir(){
}
void imprimir(){
    int i;
    for (i=0 ; i<reg_atual ; i++){
        printf("Aluno[%d]: %s\n",i+1, registros[i].nome);
        printf("\tDN: %02d/%02d/%04d\n\n",
               registros[i].dn.dia,
               registros[i].dn.mes,
               registros[i].dn.ano);
    }

}

int main(){
    int op;
    do {
        op = menu();
        switch(op){
            case 1: incluir(); break;
            case 2: editar(); break;
            case 3: excluir(); break;
            case 4: imprimir(); break;
        }
    } while (op != 0);
    return 0;
}







