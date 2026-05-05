#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int face, faces[8]={0,0,0,0,0,0,0,0}, i, n, prob;
    srand(time(0));
    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);
    prob = 100.0*(1.0/9.0)*2;
    printf("Probabilidade %d\n", prob);
    for (i=0 ; i<n ; i++){
        if (rand()%100 >= prob) {
            face = rand()%7 + 1;
            printf("%d ", face);
            faces[face-1]++;
        }
        else {
            face = 8;
            printf("%d ", face);
            faces[face-1]++;
        }
    }
    printf("\n\n");
    for (i=0 ; i<8 ; i++){
        printf("A face %d saiu %d [%.1f%%] vezes\n", i+1, faces[i], 100*(float)faces[i]/(float)n);
    }
    return 0;
}