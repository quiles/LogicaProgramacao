#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n, dado, faces[6];
    srand(time(0));
    printf("Digite o número de lançamentos: ");
    scanf("%d", &n);
    for (i=0 ; i<n ; i++){
        dado = 1 + rand() % 6;
        printf("%d ", dado);
    }
    return 0;
}