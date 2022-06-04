#include <stdio.h>

// [-10 ; 10]

int main(){
	int v[20], i;

	for (i=0 ; i<20 ; i++){
		printf("Digite o %d-ésimo numero: ", i);
		do {
			scanf("%d", &v[i]);
		} while (v[i] < -10 || v[i] > 10);
	}

	return 0;
}