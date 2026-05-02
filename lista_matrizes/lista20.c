#include <stdio.h>
#define MAX 9

int main(){
    int M[MAX][MAX], num=1, p, j, i, lin, col;
    for (i=0 ; i<MAX ; i++){
        for (j=0 ; j<MAX ; j++){
            M[i][j] = 0;
        }
    }

    M[MAX/2][MAX/2] = num++;
    for (p=1 ; p<=MAX/2 ; p++){
        
        for (j=MAX/2-p ; j<=MAX/2+p ; j++){
            M[MAX/2-p][j] = num++;
        }
        for (i=MAX/2-p+1 ; i<=MAX/2+p ; i++){
            M[i][MAX/2+p] = num++;
        }
        for (j=MAX/2+p-1 ; j>=MAX/2-p ; j--){
            M[MAX/2+p][j] = num++;
        }
        for (i=MAX/2+p-1 ; i>MAX/2-p ; i--){
            M[i][MAX/2-p] = num++;
        }
    }

    for (i=0 ; i<MAX ; i++){
        for (j=0 ; j<MAX ; j++){
            printf("%03d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}