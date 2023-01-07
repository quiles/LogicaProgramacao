#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int tracoMatriz(int A[MAX][MAX], int length){
    int i, tr=0;
    //    (linhas<colunas)? length=linhas : length=colunas;
    for (i=0 ; i<length ; i++){
        tr += A[i][i];
    }
    return tr;
}

void leituraMatriz(int A[MAX][MAX], int linhas, int colunas){
    int i,j;
    for (i=0 ; i<linhas; i++){
        for (j=0 ; j<colunas ; j++){
            scanf("%d", &(A[i][j]));
        }
    }
    printf("\n");
}

void imprimeMatriz(int A[MAX][MAX], int linhas, int colunas){
    int i,j;
    for (i=0 ; i<linhas; i++){
        for (j=0 ; j<colunas ; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void squareElementosMatriz(int A[MAX][MAX], int B[MAX][MAX], int linhas, int colunas){
    int i,j;
    for (i=0 ; i<linhas; i++){
        for (j=0 ; j<colunas ; j++){
            B[i][j] = A[i][j]*A[i][j];
        }
    }
}

void multiplicaMatriz(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int length){
    int i,j,k;
    for (i=0 ; i<length; i++){
        for (j=0 ; j<length ; j++){
            C[i][j] = 0;
            for (k=0 ; k<length ; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

void imprime_linha(int a){
    printf("%d ", a);
}

int main(){
    int M1[MAX][MAX], M2[MAX][MAX], M3[MAX][MAX];
    int i,j,din, tr;
    

    imprime_celula(M1[0][0]);

    // Leitura dimensão Matriz (din x din)
    scanf("%d",&din);
    
    if (din == 999){
        printf("BLABLA\n");
        return 0;
    }
    // Leitura Elementso da Matriz
    leituraMatriz(M1,din,din);
    // Eleva ao quadrado os elementos da Matriz M1 e salva em M2
    squareElementosMatriz(M1,M2,din,din);
    // Imprime Matriz M2
    imprimeMatriz(M2,din,din);
    // Multiplica a Matriz M1*M2 e salva em M3
    multiplicaMatriz(M1,M2,M3,din);
    // Imprime Matriz M3
    imprimeMatriz(M3,din,din);
    // Calcula o traço da Matriz M3
    tr = tracoMatriz(M3,din);
    printf("Traco: %d\n",tr);
    
    return 0;
}
