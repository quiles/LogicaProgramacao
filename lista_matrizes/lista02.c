#include <stdio.h>
#define MAX 10
int main(){
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int i,j,k, LIN_A, LIN_B, COL_A, COL_B;

    printf("Informe as dimensões da Matriz A: ");
    scanf("%d%d", &LIN_A, &COL_A);

    printf("Informe as dimensões da Matriz B: ");
    scanf("%d%d", &LIN_B, &COL_B);

    if (COL_A != LIN_B){
        printf("A multiplicação não é possível\n\n");
    }
    else {
        printf("Digite os valores da matriz A[%d][%d]: ", LIN_A, COL_A);
        for (i=0 ; i<LIN_A ; i++){
            for (j=0 ; j<COL_A ; j++){
                scanf("%d", &A[i][j]);
            }
        }
        printf("Digite os valores da matriz B[%d][%d]: ", LIN_B, COL_B);
        for (i=0 ; i<LIN_B ; i++){
            for (j=0 ; j<COL_B ; j++){
                scanf("%d", &B[i][j]);
            }
        }

        for (i=0 ; i<LIN_A ; i++){
            for (j=0 ; j<COL_B ; j++){
                C[i][j] = 0;
                for (k=0 ; k<COL_A ; k++)
                    C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
        printf("O resultado de A[%d][%d] * B[%d][%d] = C[%d][%d]:\n", LIN_A, COL_A, LIN_B, COL_B, LIN_A, COL_B);
        for (i=0 ; i<LIN_A ; i++){
            for (j=0 ; j<COL_B ; j++){
                printf("\t%d", C[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}