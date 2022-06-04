#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
#define FACES 6

int main(){
	int faces[FACES], dado, i;
	int facev, prob, p;

	printf("Lançamento de dados com %d Faces\n", FACES);

	do {
		printf("Informe a face viciada: ");
		scanf("%d", &facev);
	} while (facev < 1 || facev>FACES);


	facev = facev - 1;
	printf("Qual é o percentual: ");
	scanf("%d", &prob);

	for (i=0 ; i<FACES ; i++) faces[i]=0;

	for (i=0 ; i<MAX ; i++){
		p = rand()%100;
		if (p<prob){ 
			dado = facev;
		}
		else {
			do {
				dado = rand()%FACES;
			} while (dado==facev);
		}

		printf("Sorteio: %d\n", dado+1);
		faces[dado]++;
	}
	for (i=0 ; i<FACES ; i++){
		printf("Dado[%d] = %d\n", i+1, faces[i]);
	}

	return 0;
}