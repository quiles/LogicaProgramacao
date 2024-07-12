#include <stdio.h>
#include <stdlib.h>

#define MAX 11

int main() {
    int i, j, n, matrix[MAX][MAX];
    int value = 1;
    int x, y;

    // direção de movimento
    int dx[] = {0, 1, 0, -1}; // direita, baixo, esquerda, cima
    int dy[] = {1, 0, -1, 0};
    int steps = 1; // passos a serem dados antes de mudar a direção
 
    for (i=0 ; i<MAX ; i++){
        for (j=0 ; j<MAX ; j++){
            matrix[i][j] = 0;
        }
    }

    // Verifica se o tamanho da matriz está ok (impar e no intervalo considerado)
    do {
        printf("Tamanho da matriz (n x n): ");
        scanf("%d", &n);
        if (n % 2 == 0 || n>11 || n<3) {
            printf("\tn deve se impar e 3<=n<=11.\n");
        }
    } while (n % 2 == 0 || n>11 || n<3);

    // Posição central
    x = n / 2;
    y = n / 2;

    // Preenchimento do valor central
    matrix[x][y] = value;
    value++;
    
    while (value <= n * n) { // value representa o valor da célula e o número de células a serem preenchidas
        for (int d = 0; d < 4; d++) {
            for (int s = 0; s < steps; s++) {
                if (value > n * n) break;
                x += dx[d];
                y += dy[d];
                if (x >= 0 && x < n && y >= 0 && y < n) { //garantir que a célula x-y está na matriz
                    matrix[x][y] = value;
                    value++;
                }
            }
            if (d == 1 || d == 3) steps++;
        }
    }
    
    // Imprime a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}