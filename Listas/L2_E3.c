#include <stdio.h>
#include <stdlib.h>

int main(){
	int continua=1, dado, face, vicio, prob, p;
	float saldo;

	printf("Configuração da Máquina\n");
	do {
		printf("\tQual é a face viciada [1:6]: ");
		scanf("%d", &vicio);
	} while (vicio < 1 || vicio > 6);

	do {
		printf("\tQual é a probabilidade [0:100]: ");
		scanf("%d", &prob);
	} while (prob < 0 || prob > 100);


	printf("\n\nMáquina de Azar: Lançamento de Dados\n\n");
	printf("\tCom quanto quer começar?: ");
	scanf("%f", &saldo);

	while (saldo > 0 && continua){
		do { // verifica se o lado digitado está entre 1 e 6
			printf("\tEscolha o lado [1:6]: ");
			scanf("%d", &face);
		} while (face < 1 || face > 6);


		// Sorteio do Dado viciado
		p = rand()%100; // probabilidade de selecao
		if (p<prob) dado = vicio;
		else {
			do {
				dado = rand()%6 + 1;
			} while (dado == vicio);
		}

		printf("\tResultado do Sorteio: %d\n", dado);
		if (dado == face){
			saldo += 1.0;
			printf("\tAcerto, Ganhou 1 real - Saldo atual: %.2f\n\n", saldo);
		}
		else {
			saldo -= 0.2;
			printf("\tErrou, Perdeu 20 centavos - Saldo atual: %.2f\n\n", saldo);			
		}

		if (saldo <= 0.0){
			printf("\n\t\t Quebrou !!!\n\n");
			continua = 0;
		}
		else {
			printf("\tDeseja Continuar? (Digite 0 para sair): ");
			scanf("%d", &continua);
		}

	}

	printf("\n\n\t\tSaldo Final: %.2f\n", saldo);
	printf("\t\tFIM \n\n\n");

	return 0;
}