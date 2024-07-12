#include <stdio.h>
 
int main (){
    int A[30][30], B[30][30], C[30][30], line[2], colm[2], i, j;
 
    scanf ("%d %d", &line[0], &colm[0]);
    scanf ("%d %d", &line[1], &colm[1]);
 
    if (line[0]>30||line[1]>30||colm[0]>30||colm[1]>30||line[1]!=colm[0]){
        printf ("ERRO");
        return 0;
    }
 
    for (i=0;i<line[0];i++){
        for (j=0;j<colm[0];j++){
            scanf ("%d", &A[i][j]);
        }
    }
 
    for (i=0;i<line[1];i++){
        for (j=0;j<colm[1];j++){
            scanf ("%d", &B[i][j]);
        }
    }
 
    for (i=0;i<line[0];i++){
        for (j=0;j<colm[1];j++){
            C[i][j]=0;
            for (int k=0;k<colm[0];k++){
                C[i][j] += A[i][k] *B[k][j];
            }
            printf ("%d ", C[i][j]);
        }
        printf ("\n");
    }
 
    return 0;
}