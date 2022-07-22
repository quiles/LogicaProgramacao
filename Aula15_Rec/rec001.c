/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int maior(int V[], int n){
	int m;
	if (n==1) return V[0];
	else {
		m = maior(V,n-1);
		if (V[n-1] > m) return V[n-1];
		else return m;
	}
}

int menor(int V[], int n){
	int m;
	if (n==1) return V[0];
	else {
		m = menor(V,n-1);
		if (V[n-1] < m) return V[n-1];
		else return m;
	}
}
float media(int V[], int n){
	float m;
	if (n==1) return V[0];
	else {
		m = ((float)V[n-1] + (float)(n-1)*(media(V,n-1)))/(float)n;
	}
}

int potk(int k){
	if (k==0) return 1;
	else return 2*potk(k-1);
}


int main(int argc, char *argv[]){
	int V[MAX], i;
	for (i=0 ; i<MAX ; i++) {
		V[i] = rand()%100;
		printf("%d ", V[i]);
	}
	printf("\n\n");
	printf("Maior elemento de V: %d\n", maior(V,MAX));
	printf("Menor elemento de V: %d\n", menor(V,MAX));
	printf("Média elemento de V: %f\n", media(V,MAX));

	return 0;
}


