/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	long int s2=0, n, termo, fat=1;
	int i, p, f;
	printf("Digite o valor de n: ");
	scanf("%ld", &n);
	for (i=1 ; i<=n ; i++){
		fat = fat*i;
		termo = 1;
		for (p=1 ; p<=fat ; p++){
			termo = termo*i;
		}

		s2 = s2 + termo;
	}
	printf("Valor s2 = %ld\n", s2);
	return 0;
}