/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Exercício Lançamento de Dados

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// dado armazena a face sorteada
	int dado;
	// as variáveis f1-6 armazenam a quantidade de vezes que cada face foi sorteada
	int f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;

	// inicia a semente do gerador de números aleatórios
	srand (time(NULL));

	printf("Simulação Sorteio de um Dado\n");
	printf("O dado será lançado 1000 vezes\n");

	for (int i=0 ; i<1000 ; i++){
		dado = (rand()%6)+1; // sorteia um número entre 1 e 6 (face)
		printf("%d ", dado);
		if (dado==1) f1++;
		else if (dado==2) f2++;
		else if (dado==3) f3++;
		else if (dado==4) f4++;
		else if (dado==5) f5++;
		else f6++;
	}
	printf("\n\nResultado:\n");
	printf("\tFace 1 - %.2f%%\n", (float)f1/10.0);
	printf("\tFace 2 - %.2f%%\n", (float)f2/10.0);
	printf("\tFace 3 - %.2f%%\n", (float)f3/10.0);
	printf("\tFace 4 - %.2f%%\n", (float)f4/10.0);
	printf("\tFace 5 - %.2f%%\n", (float)f5/10.0);
	printf("\tFace 6 - %.2f%%\n", (float)f6/10.0);
	return 0;
}

