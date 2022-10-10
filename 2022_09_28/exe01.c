/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício 01 - Aula 06

#include <stdio.h>
#include <stdlib.h>

int main(){
	int dado, n, i;
	int f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;

	printf("Digite o numero de lancamentos: ");
	scanf("%d", &n);

	for (i=0 ; i<n ; i++){
		dado = rand()%6 + 1;
		switch(dado){
			case 1: f1++; break;
			case 2: f2++; break;
			case 3: f3++; break;
			case 4: f4++; break;
			case 5: f5++; break;
			case 6: f6++; break;
		}
	}

	printf("\n\nResultados:\n");
	printf("\tFace 1: %.1f%%\n", 100.0*((float)f1/(float)n));
	printf("\tFace 2: %.1f%%\n", 100.0*((float)f2/(float)n));
	printf("\tFace 3: %.1f%%\n", 100.0*((float)f3/(float)n));
	printf("\tFace 4: %.1f%%\n", 100.0*((float)f4/(float)n));
	printf("\tFace 5: %.1f%%\n", 100.0*((float)f5/(float)n));
	printf("\tFace 6: %.1f%%\n", 100.0*((float)f6/(float)n));

	return 0;
}