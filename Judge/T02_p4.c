/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*  // Versao 1
int main(){
	long int bin;
	int num=0, resto, pot=1;
	scanf("%ld", &bin);

	while (bin) {
		resto = bin%10;
		bin /= 10;
		num += pot*resto;
		pot = pot*2; 
	}
	printf("%d\n", num);

	return 0;
}
*/

// Versao 2

int main(){
	long int bin;
	int num=0, resto, pot=1, i, exp=0;
	scanf("%ld", &bin);

	while (bin) {
		resto = bin%10;
		bin /= 10;
		pot = 1;
		for (i=1 ; i<=exp ; i++) {
			pot = pot * 2;
		}
		num += pot*resto;
		exp++;
	}
	printf("%d\n", num);

	return 0;
}
