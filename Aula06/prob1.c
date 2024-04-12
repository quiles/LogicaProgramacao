/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int num, i, soma=0;
	printf("Informe um número: ");
	scanf("%d", &num);
	for (i=1 ; i<num ; i++){
		if (num%i == 0)
			soma += i;
	}
	if (soma == num)
		printf("O número %d é perfeito\n", num);
	else
		printf("O número %d não é perfeito\n", num);		
	return 0;
}