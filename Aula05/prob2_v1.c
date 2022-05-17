/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int i,j,pot=0, fat=1, sinal=1;
	float S=0, termo, x;
	float num, den;
	printf("Problema 2 - Cálculo da Série (Slide 45)\n");
	printf("Digite o valor de X: ");
	scanf("%f", &x);
	// calculo com os 10 primeiros termos, para valores maiores
	// deve-se substituir float por double
	for (i=0 ; i<10 ; i++){
		// calculo do numerador
		num = 1;
		for (j=0 ; j<pot ; j++){
			// num = num * x;
			num *= x; // equivalente num = num * x;
		}
		pot += 2; // equivalente pot = pot + 2;
		// calculo do denominador
		den = 1;
		for (j=1 ; j<=fat ; j++){
			// den = den * j;
			den *= (float)j;
		}
		fat += 2;
		termo = (float)sinal * (num / den);
		sinal *= -1.0;
		S += termo;
	}
	printf("Valor resultante: %.3f\n\n", S);


	return 0;
}