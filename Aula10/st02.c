/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];

	gets(nome);
	printf("Nome Digitado: %s\n", nome);

	fgets(nome, 100, stdin);
	printf("Nome Digitado: %s\n", nome);


	return 0;
}