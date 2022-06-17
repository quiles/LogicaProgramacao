#include <stdio.h>
#include <stdlib.h>

int main(){
	int continua, dado	;

	printf("Lançamento de Dados:\n");
	do {
		dado = rand()%6 + 1;
		printf("   Resultado do Sorteio: %d\n", dado);
		printf("   Deseja Continuar? (Digite 0 para sair): ");
		scanf("%d", &continua);
	} while (continua);
	// ou while (continua != 0)
	// ao usar apenas a variável (continua), a variável
	// é interpretada como variável lógica (boleana), ou seja
	// zero é facil e qualquer outro valor é verdadeiro

	printf("\n\n\t\t FIM \n\n\n");

	return 0;
}