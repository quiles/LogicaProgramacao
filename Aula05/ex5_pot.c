/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int i, j, num=1, k;
	printf("Potencia de numeros inteiros\n");
	printf("\tDigite a base: ");
	scanf("%d", &i);
	printf("\tDigite o expoente: ");
	scanf("%d", &j);

	for (k=0 ; k<j ; k++){
		num *= i;
	}

	printf("%d elevado a %d eh: %d\n", i, j, num);
	return 0;
}

