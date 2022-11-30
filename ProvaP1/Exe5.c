/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Questão 05

#include <stdio>


int main(){
	int m[5][10], i, j, v[5];

	for (i=0 ; i<5 ; i++){
		for (j=0 ; j<10 ; j++){
			scanf("%d", &(m[i][j]));
		}
	}

	for (i=0 ; i<5 ; i++){
		v[i] = 0;
		for (j=0 ; j<10 ; j++){
			v[i] += m[i][j]*m[i][j];
		}
	}
	return 0;
}







