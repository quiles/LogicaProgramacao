#include <stdio.h>
#include <stdlib.h>


int main(){
	int M1[3][4], M2[4][2], M3[3][2];
	int i,j,k;

	// geracao da matriz M1
	printf("Matriz M1:\n");
	for (i=0 ; i<3 ; i++){
		for (j=0 ; j<4 ; j++){
			M1[i][j] = 2; //rand()%10;
			printf("%d ", M1[i][j]);
		}
		printf("\n");
	}

	// geracao da matriz M2
	printf("Matriz M1:\n");
	for (i=0 ; i<4 ; i++){
		for (j=0 ; j<2 ; j++){
			M2[i][j] = 1; //rand()%10;
			printf("%d ", M2[i][j]);
		}
		printf("\n");
	}


	// Calculando M3 = M1*M2
	for (i=0 ; i<3 ; i++){
		for (j=0 ; j<2 ; j++){
			M3[i][j] = 0;
			for (k=0 ; k<4 ; k++){
				M3[i][j] += M1[i][k]*M2[k][j];
			}
		}
	}

	// impressao da matriz resultante M3
	printf("\nMatriz M3=M1*M2\n");
	for (i=0 ; i<3 ; i++){
		for (j=0 ; j<2 ; j++){
			printf("%d ", M3[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}