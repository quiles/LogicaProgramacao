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
    int dado, i, max, face, prob, s;
    int faces[6];
    srand (time(NULL));

    printf("Quantos lançamentos? ");
    scanf("%d", &max);

    printf("Qual face [1-6]? ");
    scanf("%d", &face);
    printf("Proporção? ");
    scanf("%d", &prob);

    for (i=0 ; i<6 ; i++) faces[i] = 0;

    for (i=0 ; i<max ; i++){
        s = rand()%100;
        if (s<prob) {
            dado = face-1;
        }
        else {
            do {
                dado = rand() % 6;
            } while (dado == face-1);
        }
        faces[dado]++;
        printf("%d ", dado+1);
    }
    printf("\n");

    for (i=0 ; i<6 ; i++){
        printf("Face %d : %d\n", i+1, faces[i]);
    }

    return 0;
}