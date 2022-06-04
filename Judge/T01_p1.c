/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	int N,i,j;
	long int S=0, termo;
	scanf("%d",&N);
	if (N<0 || N>15) {
		printf("NaN \n");
	}
	else {
		// somatório dos termos de S
		for (i=1 ; i<=N ; i++){
			termo = 1;
			// cálculo da potência (sem uso do pow)
			for (j=1 ; j<=i ; j++){
				termo = termo * i;
			}
			S += termo;
		}
		printf("%ld \n",S);
	}

	return 0;
}