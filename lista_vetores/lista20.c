#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    int v[MAX], i, j, soma;
    // leitura dos números
    for (i=0 ; i<MAX ; i++)
        printf("%d ", v[i] = rand() % 11);
    printf("\nDigite o valor desesjado: ");
    scanf("%d", &soma);

    for (i=0 ; i<MAX-1 ; i++){
        for (j=i+1 ; j<MAX ; j++) {
            if (v[i]+v[j] == soma)
                printf("Posicoes %d e %d somam %d\n", i, j, soma);
        }
    }
    return 0;
}