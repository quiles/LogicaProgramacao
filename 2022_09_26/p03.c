/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Problema 03 - Aula 05

#include <stdio.h>

int main(){
	int num, div, primo=1;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for (div=2 ; div<=(num/2) ; div++){
		if (num % div == 0){
			primo = 0;
			break;
		}
	}

	if (primo) printf("\t%d eh um numero primo\n\n", num);
	else printf("\t%d nao eh um numero primo\n\n", num);

	return 0;
}