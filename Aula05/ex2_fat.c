/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int num, fat=1, i;
	printf("Qual fatorial deseja calcular: ");
	scanf("%d", &num);

	// Opção com laço for
	for (i=num ; i>1 ; i--){
		fat = fat * i;
	}

	// Opção com laço while
	// i = num;
	// while (i>1){
	// 	fat = fat * i;
	// 	i--;
	// }

	printf("Fatorial de %d eh %d\n\n", num, fat);
	return 0;
}