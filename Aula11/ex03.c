#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[100];
	char RA[15];
	float nota;
	int freq;
} TAluno;

int menu(){
	int op;
	printf("Sistema de Cadastro de Alunos\n");
	printf("\t[1] - Cadastrar\n");
	printf("\t[2] - Consulta\n");
	printf("\t[3] - Relatório\n");
	printf("\t[9] - Sair\n\n");
	printf("Qual opção: ");
	scanf("%d", &op);
	return op;
}


int main(){
	TAluno alunos[100];
	int op;
	
	do {
		op = menu();

		switch(op){
			case 1: Cadastra_Aluno(); break;
			case 2: Consulta_Aluno(); break;
			case 3: Imprime_Rel(); break;
		}

	} while (op != 9);
	
	return 0;
}



