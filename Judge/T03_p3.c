/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	int num, V1[20];
	int i, maior, menor, soma=0, qtd=0;
	float V2[20];

	// leitura dos valores e armazenamento em V1
	for (i=0 ; i<20 ; i++){
		scanf("%d", &V1[i]);
	}


	// busca pelo maior e menor valor
	maior = V1[0];
	menor = V1[0];
	for (i=1 ; i<20 ; i++){
		if (V1[i] > maior) maior = V1[i]; 
		if (V1[i] < menor) menor = V1[i]; 
	}
	
	// obtenção da soma e quantidade de números para o cálculo
	// da média dos valores diferentes de zero
	for (i=0 ; i<20 ; i++){
		if (V1[i] != 0){
			qtd = qtd + 1;
			soma = soma + V1[i];
		}
	}

	// subtração do menor valor para normalização
	for (i=0 ; i<20 ; i++){
		V2[i] = V1[i] - menor;
	}
	
	printf("%d %d\n", maior, menor);

	// normalização entre 0-1
	maior = maior - menor;
	for (i=0 ; i<20 ; i++){
		V2[i] = V2[i] / (float)maior;
	}

	printf("%.3f\n", (float)soma / (float) qtd);
	for (i=0 ; i<20 ; i++){
		printf("%.3f ", V2[i]);
	}

	return 0;	
}