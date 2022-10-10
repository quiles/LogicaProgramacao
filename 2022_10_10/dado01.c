/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define MAX 100000

int main(){
    int dado, i, max;
    int faces[6];
    srand (time(NULL));

    printf("Quantos lançamentos? ");
    scanf("%d", &max);

    for (i=0 ; i<6 ; i++) faces[i] = 0;

    for (i=0 ; i<max ; i++){
        dado = rand() % 6;
        faces[dado]++;
        printf("%d ", dado+1);
    }
    printf("\n");

    for (i=0 ; i<6 ; i++){
        printf("Face %d : %d\n", i+1, faces[i]);
    }

    return 0;
}