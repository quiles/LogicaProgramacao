/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	int num, soma=0, qtd=0;
	do {
		printf("Digite um número [-1 para sair]: ");
		scanf("%d", &num);
		if (num != -1){
			soma += num;
			qtd++;
		}
	} while (num != -1);
	// se algum número diferente de -1 foi digitado, imprime a média
	if (qtd) {
		// média - número inteiro
		printf("Média do(s) %d número(s): %d\n", qtd, soma / qtd);
		// média - número real com duas casas decimais (%.2f)
		printf("Média do(s) %d número(s): %.2f\n", qtd, (float)soma / (float)qtd);
	}
	return 0;
}

