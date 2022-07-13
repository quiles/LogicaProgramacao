/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	int i, a, b, val=1;
	printf("Calculo de 2^(a*b)\n");
	printf("\tDigite o valor de a: ");
	scanf("%d", &a);
	printf("\tDigite o valor de b: ");
	scanf("%d", &b);

	for (i=1 ; i<=(a*b) ; i++){
		val *= 2;
	}

	printf("\tValor de 2^(%d*%d) = %d\n\n", a,b,val);

	return 0;
}