#include <stdio.h>

struct Aluno {
	char nome[100];
	int RA;
	float nota;
	float freq;
};

struct Aluno alunos[100];

int menu(){
	int op;
	printf("Sistema de Cadastro de Alunos\n");
	printf("\t[1] - Cadastrar\n");
	printf("\t[2] - Remover\n");
	printf("\t[3] - Visualizar\n");
	printf("\t[4] - Listar Todos\n");
	printf("\t[0] - Sair\n");
	printf("\n\tDigite a opção: ");
	scanf("%d", &op);
	return op;
}

void inserir_aluno(){	
	printf("\n\n inserindo aluno\n\n");

}

void remover_aluno(){
}

void visualizar_aluno(){
}

void listar_todos(){
}

int main(){
	int opcao;
	do {
		opcao = menu();
		switch(opcao){
			case 1: inserir_aluno(); break;
			case 2: remover_aluno(); break;
			case 3: visualizar_aluno(); break;
			case 4: listar_todos(); break;
			default: opcao = 0;
		}
	} while (opcao);
	return 0;
}








