#include <stdio.h>

int ordenado(int v[], int n){
	if (n==1) return 1;
	else {
		if (v[n-1] > v[n-2]) 
			return ordenado(v,n-1);
		else 
			return 0;
	}
}

int main() {
	int v[] = {1,2,3,4,5,6};
	if (ordenado(v,6)) printf("O vetor está ordenado\n\n");
	else printf("O vetor não está ordenado\n\n");
	return 0;
}