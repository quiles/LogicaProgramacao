/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
	char nome[100];
	char RA[15];
	float nota;
	int freq;
} TAluno;


int main(){
	TAluno alunos[MAX];
	int i,c;

	printf("====================\n");
	printf("Cadastro dos alunos:\n");
	printf("====================\n\n");
	for (i=0 ; i<MAX ; i++){
		printf("Aluno %3d\n",i);
		printf("\tNome: ");
		scanf("%99[^\n]",alunos[i].nome);
		fflush(stdin);
		printf("\tRA: ");
		scanf("%14[^\n]",alunos[i].RA);
		fflush(stdin);
		printf("\tNota: ");
		scanf("%f", &(alunos[i].nota));
		fflush(stdin);
		printf("\tFrequencia: ");
		scanf("%d", &(alunos[i].freq));
		fflush(stdin);
	}

	printf("\n\n==========\n");
	printf("Impressão:\n\n");

	for (i=0 ; i<MAX ; i++){
		printf("Aluno %d\n", i);
		printf("\tNome: %s\n",alunos[i].nome);
		printf("\tRA: %s\n", alunos[i].RA);
		printf("\tNota: %.1f\n", alunos[i].nota);
		printf("\tFrequencia: %d\n", alunos[i].freq);
	}

	return 0;
}



