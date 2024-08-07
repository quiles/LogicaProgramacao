#include <stdio.h>

int main() {
    int matriz[4][5];
    int somaLinha[4];
    int i,j;

    printf("Digite os elementos da matriz 4x5:\n");
    for (i=0; i<4; i++) {
        for (j=0; j<5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<4; i++) {
        somaLinha[i] = 0;
        for (j=0; j<5; j++) {
            somaLinha[i] += matriz[i][j];
        }
        somaLinha[i] *= somaLinha[i];
    }

    // Imprime os valores do vetor final
    printf("Valores do vetor somaLinha ao quadrado:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%d\n", somaLinha[i]);
    }

    return 0;
}
