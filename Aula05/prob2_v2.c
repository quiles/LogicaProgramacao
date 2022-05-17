/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int i,j,pot=0, fat=3, sinal=-1.0;
	float S=1, termo, x;
	float num=1.0, den=1.0;
	printf("Problema 2 - Cálculo da Série (Slide 45) - Versão 02\n");
	printf("Digite o valor de X: ");
	scanf("%f", &x);
	for (i=1 ; i<10 ; i++){
		// calculo do numerador (incremental, usa a potencia calculada antes)
		num *= x*x;
		// calculo do denominador (incremental, usa o fat calculado antes)
		den *= (float)fat*(fat-1);
		fat += 2;

		termo = (float)sinal * (num / den);
		sinal *= -1.0;

		// S = S + termo;
		S += termo;
	}
	printf("Valor resultante: %.3f\n\n", S);


	return 0;
}