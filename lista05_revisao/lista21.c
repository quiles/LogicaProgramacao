#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
    int i, j, k, vet[MAX], max=MAX;
    for (i=0 ; i<MAX ; i++){
        vet[i] = rand() % 10;
        printf("%d ", vet[i]);
    }

    for (i=0 ; i<max ; i++){
        for (j=i+1 ; j<max ; j++) {
            if (vet[i] == vet[j]) {
                for (k=j ; k<max-1 ; k++){
                    vet[k] = vet[k+1];
                }
                max--;
            }
        }
    }
    printf("\nVetor resultante: ");
    for (i=0 ; i<max ; i++){
        printf("%d ", vet[i]);
    }
    printf("\n\n");
    return 0;
}