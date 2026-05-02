#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1000000
int main(){
    int dado, i, p, face, lances[6]={0,0,0,0,0,0}, sorteio;
    do {
        printf("Digite a face selecionada [1-6]: ");
        scanf("%d", &face);
    } while (face<1 || face>6);
    do {
        printf("Digite Percentual [0-100]: ");
        scanf("%d", &p);
    } while (p<0 || p>100);

    for (i=0 ; i<MAX ; i++){
        sorteio = rand()%100;
        if (sorteio<p) 
            dado = face-1;
        else 
            do {
                dado = rand()%6; // entre 0 e 5
            } while (dado == face-1);
        printf("%d ", dado+1); 
        lances[dado]++;
    }
    printf("\n\nResultados:\n");
    for (i=0 ; i<6 ; i++) {
        printf("A Face %d saiu %.2f%%\n", i+1, 100.0*(float)lances[i]/MAX);
    }

    return 0;
}