/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício 02 - Aula 07

#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[128], i, k, encontrou=0;
	for (i=0 ; i<128 ; i++){
		A[i] = rand()%50;
		printf("%d ", A[i]);
//		scanf("%d", &(A[i]));
	}
	printf("\nDigite a chave: ");
	scanf("%d", &k);

	for (i=0 ; i<128 ; i++){
		if (A[i] == k){
			printf("%d ", i);
			encontrou = 1;
		}
	}
	printf("\n");
	if (!encontrou) printf("chave não encontrada\n\n");

	return 0;
}




