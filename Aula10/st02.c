#include <stdio.h>
#include <string.h>

int main(){
	char nome[100];

	gets(nome);
	printf("Nome Digitado: %s\n", nome);

	fgets(nome, 5, stdin);
	printf("Nome Digitado: %s\n", nome);


	return 0;
}