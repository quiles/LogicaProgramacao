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
	int i, ini, fim, qtd=0;
	float media=0.0;
	scanf("%d %d",&ini, &fim);
	for (i=ini ; i<=fim ; i++){
		if (i%7==0 && i%2==0){
			qtd++;
			media += i;
			// printf("%d\n",i);
		}
	}
	if (qtd==0) media = 0.0;
	else media /= (float)qtd;
	printf("%f\n", media);

	return 0;
}