/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
	char frase[MAX];
	int i, qtd=0;

	printf("Digite uma frase: ");
	fgets(frase, MAX, stdin);

	for (i=0 ; i<strlen(frase) ; i++){
		if (frase[i] == 'a'){
			qtd++;
			frase[i] = 'b';
		}
	}
	printf("Substituicoes: %d\n", qtd);
	puts(frase);
	return 0;
}