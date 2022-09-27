/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Problema 03 - Aula 05
//		versão para encontrar primos num intervalo dado)

#include <stdio.h>

int main(){
	int num, div, primo, ini, fim;
	printf("Digite o intervalo desejado - Início: ");
	scanf("%d", &ini);
	printf("Digite o intervalo desejado - Fim: ");
	scanf("%d", &fim);

	printf("Números primos:\n");
	for (num = ini ; num<=fim ; num++){
		primo = 1;
		for (div=2 ; div<=(num/2) ; div++){
			if (num % div == 0){
				primo = 0;
				break;
			}
		}
		if (primo) printf("\t%d eh um numero primo\n", num);
	}

	return 0;
}