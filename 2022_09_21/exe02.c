/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	int fat=1, n, i;
	printf("Digite o valor de n:");
	scanf("%d", &n);

	for (i=1 ; i<=n ; i++) 
		fat = fat * i;

	printf("O fatorial de %d é %d\n", n, fat);
	return 0;
}