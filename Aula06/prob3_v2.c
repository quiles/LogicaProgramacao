/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int num, valor, resto, soma=0;
	printf("Informe um número: ");
	scanf("%d", &num);
	valor = num;
	while (num > 0){
		resto = num % 10;
		num = num / 10;
		soma = soma + resto;
		printf("%d -> %d\n", num, resto);
	}
	printf("A soma dos dígitos de %d eh %d\n", valor, soma);
	return 0;
}



