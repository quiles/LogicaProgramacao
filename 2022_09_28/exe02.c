/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício 02 - Aula 06

#include <stdio.h>
#include <stdlib.h>

int main(){
	long int s1=0, n, i, p, termo;

	printf("Digite n: ");
	scanf("%ld", &n);

	for (i=1 ; i<=n ; i++){
		termo = i;
		for (p=2 ; p<=i ; p++){
			termo = termo * i;
		}
		s1 = s1 + termo;
	}

	printf("Valor f(%ld) = %ld\n", n, s1);
	return 0;
}




