#include <stdio.h>

int main(){
    int n, m, i, j, soma=0, qtd=0;
    do {
        scanf("%d", &n);
    } while (n<1 || n>20);
    do {
        scanf("%d", &m);
    } while (m<1 || m>20);

    int M[n][m], Mt[m][n];

    for (i=0 ; i<n ; i++){
        for (j=0 ; j<m ; j++){
            scanf("%d", &M[i][j]);
        }
    }

    for (i=0 ; i<n ; i++){
        for (j=0 ; j<m ; j++){
            Mt[j][i] = M[i][j];
        }
    }

    for (i=0 ; i<n ; i++){
        for (j=0 ; j<m ; j++){
            if (M[i][j]%2==0 && M[i][j]%3==0){
                soma += M[i][j];
                qtd++;
            }
        }
    }
    printf("%f ", (float)soma/qtd);

    return 0;
}