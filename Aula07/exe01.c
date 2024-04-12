/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
    int r[10], s[10], x[20], y[10], i;
    int soma=0;

    printf("Digite os valores do vetor r: ");
    for (i=0 ; i<10 ; i++) scanf("%d", &r[i]);
    printf("Digite os valores do vetor s: ");
    for (i=0 ; i<10 ; i++) scanf("%d", &s[i]);

    // calculo da soma
    for (i=0 ; i<10 ; i++) {
        soma += r[i] + s[i];
    }
    printf("O valor da soma eh: %d\n", soma);

    // Concatenação de r e s em x
    for (i=0 ; i<10 ; i++) {
        x[i] = r[i];
        x[i+10] = s[i];
    }
    printf("\n\nVetor x gerado: ");
    for (i=0 ; i<20 ; i++) printf("%d ", x[i]);

    // multiplicação (dot) entre r e s
    for (i=0 ; i<10 ; i++) {
        y[i] = r[i]*s[i];
    }
    printf("\n\nVetor y gerado: ");
    for (i=0 ; i<10 ; i++) printf("%d ", y[i]);

	return 0;
}