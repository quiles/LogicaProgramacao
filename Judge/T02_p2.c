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
	int i, div, ini, fim, soma;
	scanf("%d %d",&ini, &fim);
	for (i=ini ; i<=fim ; i++){
		soma = 0;
		for (div=1 ; div<i ; div++){
			if (i%div==0){
				soma += div;
			}
		}
		if (soma==i){
			printf("%d ",i);
		}
	}
	printf("\n");

	return 0;
}