/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Problema 02 - Aula 05 (versão 02)

#include <stdio.h>

int main(){
	double x, s=1, termo, num=1, den=1, fat=3, sinal=-1.0;
	int i;
	scanf("%lf", &x);

	for (i=2 ; i<=20 ; i++){
		num = num*x*x;
		den = den*fat*(fat-1.0);
		fat = fat + 2;
		termo = num / den;
		s = s + sinal*termo;
		sinal *= -1;
	}
	printf("Valor de S: %lf\n",s);

}