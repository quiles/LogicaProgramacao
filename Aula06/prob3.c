/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int num, valor, resto, soma=0, i;
	printf("Informe um número: ");
	scanf("%d", &num);
	valor = num;
	for (i=1 ; i<num ; i*=10){
		resto = valor%10;
		valor /= 10;
		soma += resto;
		printf("%d -> %d\n", i, resto);
	}
	printf("A soma dos dígitos de %d eh %d\n", num, soma);
	return 0;
}

