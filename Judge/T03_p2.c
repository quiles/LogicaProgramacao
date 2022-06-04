/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <math.h>
#define M 5

int main(){
	long int V[M],i,j,pot;

	for (i=0 ; i<M ; i++){
		do {
			scanf("%ld", &(V[i]));
		} while (V[i]<-10 || V[i]>10);
	}

	do {
		scanf("%ld", &pot);
	} while (pot<0 || pot>10);


	for (i=0 ; i<M ; i++){
		V[i] = pow(V[i],pot);
		printf("%ld ",V[i]);
	}
	printf("\n");
	return 0;
}
