/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Problema 02 - Aula 05 (versão 01)

#include <stdio.h>

int main(){
	double x, s=1, termo, num, den;
	int i, p, pot=2, fat=3;
	scanf("%lf", &x);

	for (i=2 ; i<=20 ; i++){
		// numerador
		num = 1;
		for (p=1 ; p<=pot ; p++){
			num = num * x;
		}
		pot = pot + 2;
		// denominador
		den = 1;
		for (p=1 ; p<=fat ; p++){
			den = den * (double)p;
		}
		fat = fat + 2;
		termo = num / den;
		if (i%2 == 0) 
			s = s - termo;
		else
			s = s + termo;
	}
	printf("Valor de S: %lf\n",s);

}