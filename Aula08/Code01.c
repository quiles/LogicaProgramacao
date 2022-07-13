/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>

// s = x/1! + x^3/3! + xˆ5/5! ....

int main(){
	int n, i;
	float x, s=0, num, den;

	printf("Digite valor de x: ");
	scanf("%f", &x);
	printf("Digite valor de n: ");
	scanf("%d", &n); // 5

	s = x;
	for (i=2 ; i<=n ; i++){
		num = x;
		for (j=1 ; j<i ; j++){
			num = num*x*x;
		}

		den = 1;
		for (j=1 ; j<i ; j++){
			den = den*(j*2)*(j*2+1);
		}

		s = s + num/dev;
	}

	return 0;
}