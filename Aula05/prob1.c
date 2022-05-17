/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	float a, b, c;
	printf("Avaliação de Triângulos\n");
	printf("Informar A, B e C, A deve ser o maior lado\n\n");
	do {
		printf("Digite A: ");
		scanf("%f", &a);
		printf("Digite B: ");
		scanf("%f", &b);
		printf("Digite C: ");
		scanf("%f", &c);
	} while (a<b || a<c);
	if (a<b+c){
		if (a*a == b*b + c*c) {
			printf("Triangulo Retangulo\n\n");
		}
		else if (a*a > b*b + c*c) {
			printf("Triangulo Obtusângulo\n\n");
		}
		else {
			printf("Triangulo acutângulo\n\n");
		}
	}
	else {
		printf("Os lados não foram um triangulo\n\n");
	}

	return 0;
}