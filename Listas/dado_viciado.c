#include <stdio.h>
#include <stdlib.h>

#define FACES 6
#define LANCES 10000

int main(){
	int faces[6];
	int dado, facev, prob, p, i; 

	// zerando o vetor faces[]
	for (i=0 ; i<FACES ; i++) faces[i] = 0;

	printf("Jogo de Dados (Viciado)\n");
	do {
		printf("\tDigite a face viciada: ");
		scanf("%d", &facev);
	} while (facev < 1 || facev > FACES);	
	// o usuário deve digitar um número entre 1 e FACES,
	// como o vetor possui índices de zero até FACES-1, efetuamos a 
	// subtração de -1 em facev
	facev--; 
	printf("\tQual é a probabilidade: ");
	scanf("%d", &prob);

	for (i=0 ; i<LANCES ; i++){
		p = rand()%100;
		if (p < prob) {
			dado = facev;
		}
		else {
			do {
				dado = rand()%FACES;
			} while (dado == facev);
		}
		faces[dado]++;	
	}

	printf("\nResultado\n");
	for (i=0 ; i<FACES ; i++){
		printf("\tTotal face[%d] -> %d\n", i+1, faces[i]);
	}

	return 0;
}