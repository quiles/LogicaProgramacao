#include <stdio.h>

int main(){
	int x, y, p, valor=1;
	printf("Potencia de um numero: x^y\n");
	printf("  Informe x: ");
	scanf("%d", &x);
	printf("  Informe y: ");
	scanf("%d", &y);

	for (p=0 ; p<y ; p++){
		valor = valor * x;
	}

	printf("Resultado de %d^%d é %d\n", x, y, valor);
	return 0;
}