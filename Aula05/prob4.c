/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>


int main(){
	float t, tmax, dt=0.01, r, n;
	int c=0, passo;
	printf("Simulação Crescimento Malthusiano\n");

	printf("Qual o tempo de simulacao: ");
	scanf("%f", &tmax);
	printf("Qual a pop inicial: ");
	scanf("%f", &n);
	printf("Qual a taxa crescimento: ");
	scanf("%f", &r);
	printf("Taxa de amostragem (impressao): ");
	scanf("%d", &passo);

	for (t=dt ; t<tmax ; t = t+dt ){
		n = n + r*n*dt;
		c=c+1;
		if (c%passo==0)
			printf("N[%.2f] -> %f\n", t, n);
	}
	return 0;
}

