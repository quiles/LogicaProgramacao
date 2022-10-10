/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício 03 - Aula 06

#include <stdio.h>
#include <stdlib.h>

int main(){
	long int s1=0, n, i, p, termo, fat;

	printf("Digite n: ");
	scanf("%ld", &n);

	fat = 1;
	for (i=1 ; i<=n ; i++){
		termo = i;
		fat *= i;
		for (p=2 ; p<=fat ; p++)
			termo *= i;
		s1 += termo;
	}

	printf("Valor f(%ld) = %ld\n", n, s1);
	return 0;
}




