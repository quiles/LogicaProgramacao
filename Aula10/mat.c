/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main(){
	int m1[MAX][MAX], 
		m2[MAX][MAX], 
		mr[MAX][MAX];
	int i,j,k;
	int l1, c1, l2, c2;

	printf("Digite L1xC1, L2xC2: ");
	scanf("%d %d %d %d", &l1, &c1, &l2, &c2);
	

	if (c1 != l2){
		printf("Multiplicação nao possível\n\n");
	}
	else {
		printf("Geracao M1:\n");
		for (i=0 ; i<l1 ; i++){
			for (j=0 ; j<c1 ; j++){
				m1[i][j] = rand()%5;
				printf("%d ",m1[i][j]);
			}
			printf("\n");
		}
		printf("Geracao M2:\n");
		for (i=0 ; i<l2 ; i++){
			for (j=0 ; j<c2 ; j++){
				// if (i==j) m2[i][j] = 1;
				// else m2[i][j] = 0;
				m2[i][j] = rand()%5;
				printf("%d ",m2[i][j]);
			}
			printf("\n");
		}


		printf("\n\nMultiplicação\n\n");
		for (i=0 ; i<l1 ; i++){
			for (j=0 ; j<c2 ; j++){
				mr[i][j] = 0;
				for (k=0 ; k<c1 ; k++){
					mr[i][j] += m1[i][k]*m2[k][j]; 
				}
			}
		}


		printf("Resultado: \n");
		for (i=0 ; i<l1 ; i++){
			for (j=0 ; j<c2 ; j++){
				printf("%d ", mr[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}