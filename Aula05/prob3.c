/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int num, i, primo=1, div;
	printf("Verifica se um número é primo\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	for (i=2 ; i<=(num/2) ; i++){
		// if (!(num % i)) {
		if ((num % i)==0) {
			div = i;
			primo = 0;
			break;
		}
	}
	if (primo) printf("%d e primo\n", num);
	else printf("%d nao e primo (div por %d)\n", num, div);
	return 0;
}

