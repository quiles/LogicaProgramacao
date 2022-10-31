/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício 03 - Aula 07

#include <stdio.h>
#include <stdlib.h>

#define MAX 6

int main(){
	int V[MAX], i, j, bolha;
	for (i=0 ; i<MAX ; i++){
		V[i] = rand()%100;
		printf("%d ", V[i]);
	}
	for (i=0 ; i<MAX ; i++){
		for (j=0 ; j<MAX-i-1 ; j++){
			if (V[j] > V[j+1]){
				bolha = V[j];
				V[j] = V[j+1];
				V[j+1] = bolha;
			}
		}
	}
	printf("\n\n");
	for (i=0 ; i<MAX ; i++){
		printf("%d ", V[i]);
	}
	printf("\n\n");


	return 0;
}




