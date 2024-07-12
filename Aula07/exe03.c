/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){
    int vetor[20], i, j, temp, troca, n=20;
    srand(time(0));
    // gerando o vetor com 20 numeros
    for (i=0 ; i<N ; i++) {
        vetor[i] = rand()%100;
        printf("%d ", vetor[i]);
    }

    for (i=0; i<N-1; i++) {
        troca = 0; // indicador de troca
        for (j = 0; j<N-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                // Troca os elementos j e j+1
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                troca = 1; 
            }
        }
        if (troca == 0) {
            break;
        }
    }

    printf("\n\nVetor Ordenado: \n");
    for (i=0 ; i<N ; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}