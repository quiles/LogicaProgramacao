/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

#define MAX 10

int main(){
	int i, p, pot;
	int A[MAX], B[MAX];

	for (i=0 ; i<MAX ; i++){
		do {
			scanf("%d", &A[i]);
		} while (A[i] < 0);
	}

	for (i=0 ; i<MAX ; i++){
		pot = 1;
		for (p=0 ; p<A[i] ; p++)
			pot *= 2;
		B[i] = pot;
	}
	for (i=0 ; i<MAX ; i++)
		printf("%d ", B[i]);
	printf("\n\n");

	return 0;
}