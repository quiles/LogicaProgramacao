/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
	char nome[100];
	char RA[15];
	float nota;
	int freq;
} TAluno;

TAluno alunos[MAX];

int menu();
int Cadastra_Aluno(int);
void Consulta_Aluno(int);
void Imprime_Rel(int);
void Consulta_RA(int);


int main(){
	int op, res;
	int index = 0;

	do {
		op = menu();
		switch(op){
			case 1: index = Cadastra_Aluno(index); break;
			case 2: Consulta_Aluno(index); break;
			case 3: Imprime_Rel(index); break;
			case 4: Consulta_RA(index); break;
		}
	} while (op != 9);
	
	return 0;
}

void Consulta_RA(int index){
	char ra[15];
	int i, encontrou=0;
	printf("Qual RA: ");
	scanf("%s", ra);

	for (i=0 ; i<index ; i++){
		if (strcmp(alunos[i].RA,ra)==0) {
			printf("\nAluno %d\n", i);
			printf("\tDados do aluno %d\n", i);
			printf("\tNome: %s\n", alunos[i].nome);
			printf("\tRA: %s\n", alunos[i].RA);
			printf("\tNota: %.1f\n", alunos[i].nota);
			printf("\tFrequencia: %d\n\n\n", alunos[i].freq);
			encontrou=1;
			break;
		}
	}
	if (!encontrou) 
		printf("\n\nAluno não cadastrado\n\n");

}



void Imprime_Rel(int index){
	for (int i=0 ; i<index ; i++){
		printf("Aluno %d\n", i+1);
		printf("Nome: %s\n",alunos[i].nome);
		printf("RA: %s\n", alunos[i].RA);
		printf("Nota: %.1f\n", alunos[i].nota);
		printf("Frequencia: %d\n", alunos[i].freq);
	}
}



int menu(){
	int op;
	printf("Sistema de Cadastro de Alunos\n");
	printf("\t[1] - Cadastrar\n");
	printf("\t[2] - Consulta\n");
	printf("\t[3] - Relatório\n");
	printf("\t[4] - Consulta RA\n");
	printf("\t[9] - Sair\n\n");
	printf("Qual opção: ");
	scanf("%d", &op);
	return op;
}

int Cadastra_Aluno(int index){
	fflush(stdin);
	if (index < MAX) {
		printf("Nome: ");
		fgets(alunos[index].nome, 100, stdin);
		alunos[index].nome[strlen(alunos[index].nome)-1] = '\0';
		printf("RA: ");
		fgets(alunos[index].RA, 15, stdin);
		alunos[index].RA[strlen(alunos[index].RA)-1] = '\0';
		printf("Nota: ");
		scanf("%f", &alunos[index].nota);
		printf("Frequencia: ");
		scanf("%d", &alunos[index].freq);
		return index+1;
	}
	else { 
		printf("\n\nLista cheia\n\n");
		return index;
	}
}


void Consulta_Aluno(int index){
	int idx;
	printf("\n");
	printf("Qual aluno? ");
	scanf("%d", &idx);
	if (idx >= index) printf("\n\nAluno não cadastrado \n\n");
	else {
		printf("\nAluno %d\n", idx);
		printf("\tDados do aluno %d\n", idx);
		printf("\tNome: %s\n", alunos[idx].nome);
		printf("\tRA: %s\n", alunos[idx].RA);
		printf("\tNota: %.1f\n", alunos[idx].nota);
		printf("\tFrequencia: %d\n\n\n", alunos[idx].freq);
	}
}

