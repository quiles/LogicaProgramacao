#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    int v[MAX], i, menor, maior;
    srand(time(0));
    printf("Números: ");
    for (i=0 ; i<MAX ; i++)
        printf("%d ", v[i]=rand() % 10);
    maior = menor = v[0];
    for (i=1 ; i<MAX ; i++){
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("\nMaior: %d\nMenor: %d\n\n", maior, menor);
    return 0;
}