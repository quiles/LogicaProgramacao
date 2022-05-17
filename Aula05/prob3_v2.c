/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int a, b, i, j, primo;
	printf("Encontra os números primos no intervalo [A,B]\n");
	printf("Digite A: ");
	scanf("%d", &a);
	printf("Digite B: ");
	scanf("%d", &b);

	for (i=a ; i<=b ; i++){
		primo = 1;
		for (j=2 ; j<=(i/2) ; j++){
			if ((i%j) == 0) {
				primo = 0;
				break;
			}
		}
		if (primo) printf("%d\n", i);

	}
	return 0;
}

