/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício 01 - Aula 07

#include <stdio.h>
#include <stdlib.h>

int main(){
	int R[10], S[10], i, soma=0, X[20], Y[10];

	for (i=0 ; i<10 ; i++){
		scanf("%d", &(R[i]));
	}
	for (i=0 ; i<10 ; i++){
		scanf("%d", &(S[i]));
	}

	for (i=0 ; i<10 ; i++){
		soma = soma + R[i] + S[i];
	}

	for (i=0 ; i<10 ; i++){
		X[i] = R[i];
	}
	for (i=0 ; i<10 ; i++){
		X[i+10] = S[i];
	}

	for (i=0 ; i<10 ; i++){
		Y[i] = R[i]*S[i];
	}

	return 0;
}




