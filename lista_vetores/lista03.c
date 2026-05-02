#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define MAX 10

int main(int argc, char *argv[]){
    if (argc<3){
        printf("Parametros incompletos\n\n");
        return 0;
    }
    const int MAX = atoi(argv[1]);
    int v[MAX], i, soma=0;

    // leitura dos números
    for (i=0 ; i<MAX ; i++)
        printf("%d ", v[i] = rand() % atoi(argv[2]));
    // calcula a soma
    for (i=0 ; i<MAX ; i++)
        soma += v[i];
    printf("\nMedia = %.2f\n\n", (float)soma/MAX);
    return 0;
}