/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int num, i, soma=0, a, b;
	printf("Informe A: ");
	scanf("%d", &a);
	printf("Informe B: ");
	scanf("%d", &b);
	for (num=a ; num<=b ; num++){
		soma = 0;
		for (i=1 ; i<num ; i++){
			if (num%i == 0)
				soma += i;
		}
		if (soma == num)
			printf("\nNúmero perfeito: %d\n", num);
	}
	return 0;
}