#include <stdio.h>

#define MAX 20

int main() {
    int m[MAX][MAX], mt[MAX][MAX];
    int n, i, j, soma=0, qtd=0;

    printf("Digite o tamanho da matriz (n x n, max 20): ");
    scanf("%d", &n);

    if (n > 20) {
        printf("Erro\n");
        return 1;
    }

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mt[j][i] = m[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((mt[i][j]%2 == 0)  && mt[i][j]%3==0){
                soma += mt[i][j];
                qtd++;
            } 
        }
    }

    printf("Matriz transposta:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mt[i][j]);
        }
        printf("\n");
    }

    if (qtd > 0) {
        printf("A media dos valores multiplos de 2 e 3 e: %.2f\n", (double)soma/qtd);
    } else {
        printf("Nao ha valores multiplos de 2 ou 3.\n");
    }

    return 0;
}
