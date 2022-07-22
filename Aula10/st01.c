/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	char nome[100];


	// observar que: ao digitar frases com mais de uma palavra, a primeira
	// palavra será lida pelo primeiro scanf, a segunda será lida automaticamente
	// pelo segundo scanf

	scanf("%s", nome);
	printf("Nome Digitado: %s\n", nome);

	scanf("%s", nome);
	printf("Nome Digitado: %s\n", nome);

	return 0;
}