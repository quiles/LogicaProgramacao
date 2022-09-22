/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	float x;
	printf("Digite um numero: ");
	scanf("%f", &x);
	printf("O quadrado de %.2f eh %.2f\n\n", x, x*x);
	return 0;
}