/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>
#define MAX 10


int main(){
	int M[MAX][MAX];
	int l, c, i, j;

	do {
		printf("Digitar as dimensões da matriz [entre 1 e %d]\n",MAX);
		printf("\tLinhas: ");
		scanf("%d", &l);
		printf("\tColunas: ");
		scanf("%d", &c);
	} while (l<1 || l>MAX || c<1 || c>MAX);

	for (i=0 ; i<l ; i++){
		for (j=0 ; j<c ; j++){
			scanf("%d", &M[i][j]);
		}
	}

	printf("\n\nImpressão Matriz:\n");
	for (i=0 ; i<l ; i++){
		printf("\t");
		for (j=0 ; j<c ; j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	return 0;
}