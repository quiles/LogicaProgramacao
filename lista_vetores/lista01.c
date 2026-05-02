#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    int v[MAX], i;
    srand(time(0));
    printf("Números recebidos: ");
    for (i=0 ; i<MAX ; i++) {
        v[i] = rand() % 10;
        printf("%d ", v[i]);
    }
    printf("\nOrdem inversa:     ");
    for (i=MAX-1 ; i>=0 ; i--){
        printf("%d ", v[i]);
    }
    printf("\n\n");
    return 0;
}