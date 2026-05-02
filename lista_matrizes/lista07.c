#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

int main(){
    int M1[L][C], M2[C][L], i, j;

    for (i=0 ; i<L ; i++){
        for (j=0 ; j<C ; j++){
            M1[i][j] = rand()%10;
            printf("\t%d", M1[i][j]);
        }
        printf("\n");
    } 
    printf("\n\n");
    for (i=0 ; i<L ; i++){
        for (j=0 ; j<C ; j++){
            M2[j][L-i-1] = M1[i][j];
        }
    }
    for (i=0 ; i<C ; i++){
        for (j=0 ; j<L ; j++){
            printf("\t%d", M2[i][j]);
        }
        printf("\n");
    }

    return 0;
}