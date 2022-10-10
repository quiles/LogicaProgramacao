/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Problema 04 - Aula 05

#define DT 0.01

#include <stdio.h>

int main(){
	float n, r, T, t=0;
	float DN;
	int cont=0;
	printf("Digite a população inicial: ");
	scanf("%f", &n);
	printf("Digite a taxa: ");
	scanf("%f", &r);
	printf("Por quanto tempo? ");
	scanf("%f", &T);
	printf("%.2f -> %.2f\n", t, n);

	for (t=DT ; t<=T ; t+=DT){
		cont++;
		DN = r*n*DT;
		n = n + DN;
		if (!(cont % 50)) {
			printf("%.2f -> %.2f\n", t, n);
		}
	}

	return 0;
}