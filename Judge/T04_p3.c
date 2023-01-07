#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// #include <float.h>
// #include <limits.h>

#define M 30
int main(){
    int A[M][M],B[M][M],C[M][M];
    int al,ac, bl,bc;
    int i,j,k;
    int valor;
    
    scanf("%d %d", &al, &ac);
    scanf("%d %d", &bl, &bc);
    
    if (al>30 || ac>30 || bl>30 || bc>30 || ac!=bl) {
        printf("ERRO\n");
        return 0;
    }
    
    for (i=0 ; i<al ; i++){
        for (j=0 ; j<ac ; j++){
            scanf("%d", &(A[i][j]));
        }
    }
    for (i=0 ; i<bl ; i++){
        for (j=0 ; j<bc ; j++){
            scanf("%d", &(B[i][j]));
        }
    }

    for (i=0 ; i<al ; i++){
        for (j=0 ; j<bc ; j++){
            valor = 0;
            for (k=0 ; k<ac ; k++){
                valor += A[i][k]*B[k][j];
            }
            C[i][j] = valor;
        }
    }

    for (i=0 ; i<al ; i++){
        for (j=0 ; j<bc ; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    
	return 0;
}
