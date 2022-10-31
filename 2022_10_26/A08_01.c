/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício 01 - Aula 08

#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[4][5], somalinha[4], total=0;
	int i,j;
	// preenchimento da matriz
	for (i=0 ; i<4 ; i++){
		for (j=0 ; j<5 ; j++){
			mat[i][j] = rand()%20;
		}
	}
	for (i=0 ; i<4 ; i++){
		somalinha[i] = 0
		for (j=0 ; j<5 ; j++){
			somalinha[i] = somalinha[i] + mat[i][j];
		}
	}
	for (i=0 ; i<4 ; i++)
		total += somalinha[i];

	printf("Soma final: %d\n\n", total);
	return 0;
}




