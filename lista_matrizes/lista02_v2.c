#include <stdio.h>

int main(){
    int L1, L2, C1, C2;
    int M1[L1][C1], M2[L2][C2], M3[L1][C2], i, j, k;
    // leitura das matrizes

    for (p=2 ; p<P ; p++){
        for (i=0 ; i<L1 ; i++){
            for (j=0 ; j<C2 ; j++){
                M3[i][j] = 0;
                for (k=0 ; k<C1 ; k++)
                    M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    
}