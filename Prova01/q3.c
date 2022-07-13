/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	int num, qtd=0, qtdi=0, soma=0, qtdm=0, prod=1;
	float media=0;
	
	do {
		scanf("%d", &num);
		if (num >= 0){
			qtd++;
			if (num%2) { // impares
				qtdi++;
				soma += num;
			}
			if (num%2==0 || num%11==0){ // múltiplos de 2 OU 11
				qtdm++;
				prod *= num;
			}
		}
	} while (num>=0);
	if (qtdi) media = (float) soma / (float) qtdi;
	if (!qtdm) prod = 0;

	printf("Valores lidos: %d\n",qtd);
	printf("Média dos impares: %f\n", media);
	printf("Produto múltiplos 2 ou 11: %d\n", prod);

	return 0;
}