#include <stdio.h>
#define MAX 1000

struct TAluno{
    char empty;
    char nome[100];
    int ra;
    float nota;
    float freq;
};

struct TAluno alunos[MAX];

int check_ra(int ra){
    int i;
    for (i=0 ; i<MAX ; i++)
        if (alunos[i].ra == ra && !alunos[i].empty) return i;
    return -1;
}

void insere(){
    char bin;
    int reg=0, ra;
    while (!alunos[reg].empty){
        reg++;
    }
    if (reg<MAX) {
        printf("Inserindo o registro %d\n", reg);
        printf("\tNome: ");
        bin = getchar();
        scanf("%[^\n]", alunos[reg].nome);
        do {
            printf("\tRA: ");
            scanf("%d", &ra);
        } while (check_ra(ra)!=-1);
        alunos[reg].ra = ra;
        printf("\tNota: ");
        scanf("%f", &alunos[reg].nota);
        printf("\tFrequencia: ");
        scanf("%f", &alunos[reg].freq);
        alunos[reg].empty = 0;
    }
    else {
        printf("\n\n\tERRO: Registro Cheio\n\n");
    }
}

void imprime(int i){
    printf("\nImpressao do Registro\n");
    printf("\tNome Aluno: %s\n", alunos[i].nome);
    printf("\tRA: %d\n", alunos[i].ra);
    printf("\tNota: %.1f\n", alunos[i].nota);
    printf("\tFrequencia: %.1f\n\n", alunos[i].freq);
}

void consulta(){
    int i, ra, pos;
    printf("\n\n\tDigite o RA desejado: ");
    scanf("%d", &ra);
    pos = check_ra(ra);
    if (pos!=-1) imprime(pos);
    else printf("\tRA nao localizado\n\n");
}

void zera_registro(){
    for (int i=0 ; i<MAX ; i++) alunos[i].empty=1;
}


void apaga(){
    int i, ra, pos;
    printf("\n\n\tDigite o RA a ser apagado: ");
    scanf("%d", &ra);
    pos = check_ra(ra);
    if (pos!=-1) {
        alunos[pos].empty = 1;
        printf("\tRA [%d] apagado com sucesso\n\n", ra);
    }
    else printf("\tRA nao localizado\n\n");
}

void imprime_all(){
    for (int i=0 ; i<MAX ; i++) {
        if (!alunos[i].empty){
            imprime(i);
        }
    }

}

int menu(){
    int op;
    printf("\nMenu de cadastro de alunos\n");
    printf("\t[0] - Sair\n");
    printf("\t[1] - Incluir\n");
    printf("\t[2] - Consulta\n");
    printf("\t[3] - Apaga Registro\n");
    printf("\t[4] - Imprime Todos\n");
    printf("\t[5] - Apaga Registros\n");
    printf("\n\tDigite a opcao: ");
    scanf("%d", &op);
    return op;

}


int main(){
    int opcao;
    zera_registro();

    do {
        opcao = menu();
        switch(opcao){
            case 1: insere(); break;
            case 2: consulta(); break;
            case 3: apaga(); break;
            case 4: imprime_all(); break;
            case 5: zera_registro(); break;
        }
    } while (opcao != 0);

    return 0;
}


