/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	int V1[50], V2[50];
	int i, N;

	scanf("%d", &N);
	if (N>50 || N<2){
		printf("Erro\n");
	}
	else {
		for (i=0 ; i<N ; i++){
			scanf("%d", &V1[i]);
		}
		for (i=0 ; i<N ; i++){
			V2[i] = V1[N-i-1];
			printf("%d ",V2[i]);
		}
	}
	return 0;
}