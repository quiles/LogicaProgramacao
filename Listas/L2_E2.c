#include <stdio.h>
#include <stdlib.h>

int main(){
	int continua=1, dado, face;
	float saldo;

	printf("Máquina de Azar: Lançamento de Dados\n\n");
	printf("\tCom quanto quer começar?: ");
	scanf("%f", &saldo);

	while (saldo > 0 && continua){
		do { // verifica se o lado digitado está entre 1 e 6
			printf("\tEscolha o lado [1:6]: ");
			scanf("%d", &face);
		} while (face < 1 || face > 6);
		dado = rand()%6 + 1;
		printf("\tResultado do Sorteio: %d\n", dado);
		if (dado == face){
			saldo += 1.0;
			printf("\tAcerto, Ganhou 1 real - Saldo atual: %.2f\n\n", saldo);
		}
		else {
			saldo -= 0.2;
			printf("\tErrou, Perdeu 20 centavos - Saldo atual: %.2f\n\n", saldo);			
		}

		printf("\tDeseja Continuar? (Digite 0 para sair): ");
		scanf("%d", &continua);

	}

	// ou while (continua != 0)
	// ao usar apenas a variável (continua), a variável
	// é interpretada como variável lógica (boleana), ou seja
	// zero é facil e qualquer outro valor é verdadeiro

	printf("\n\n\t\tSaldo Final: %.2f\n", saldo);
	printf("\t\tFIM \n\n\n");

	return 0;
}