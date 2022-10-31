/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Ler uma matriz A 5x5 e um escalar p
// Gerar uma matriz B no qual cada célula de B
// é a célula equivalente da matriz A^p

#include <stdio.h>


int main(){
    int A[5][4], B[5][4], p, i, j, k;

    printf("Digite os valores da matriz A: ");
    for (i=0 ; i<5 ; i++){  // varre as linhas da matriz
        for (j=0 ; j<4 ; j++){ // varre as colunas
            scanf("%d", &(A[i][j]));
        }
    }        
    printf("Digite p: ");
    scanf("%d", &p);

    for (i=0 ; i<5 ; i++){  
        for (j=0 ; j<4 ; j++){ 
            B[i][j] = 1;
            for (k=0 ; k<p ; k++)
                B[i][j] = B[i][j] * A[i][j];
        }
    }

    return 0;
}
