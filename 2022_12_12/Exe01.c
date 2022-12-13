#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

// encontra o menor valor de um vetor v
int menor(int v[], int n){
	int aux;
	if (n==1) return v[0];
	else {
		aux = menor(v, n-1);
		if (aux > v[n-1]) return v[n-1];
		else return aux;
	}
}

// calcula a soma dos elementos de um vetor v
int soma(int v[], int n){
	if (n==1) return v[0];
	else return v[n-1] + soma(v,n-1);
}

// calcula a média do vetor v
float media(int v[], int n){
	float med;
	if (n==1) return (float)v[0];
	else {
		med = media(v,n-1);
		return (med*((float)n-1.0) + v[n-1]) / (float)n;
	}
}

// calcula 2^k recursivamente
int pot2(int k){
	if (k==0) return 1;
	else return 2*pot2(k-1);
}

int main(){
	int vet[MAX];
	srand(time(0));
	for (int i=0 ; i<MAX ; i++) {
		vet[i] = rand()%100;
		printf("%d ", vet[i]);
	}
	printf("\nO menor elemento eh: %d\n", menor(vet,MAX));
	printf("A soma eh: %d\n", soma(vet,MAX));
	printf("A media eh: %f\n", media(vet,MAX));
	return 0;
}



