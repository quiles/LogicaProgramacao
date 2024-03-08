#include <stdio.h>

int main(){
    long int fat=1, n;
    printf("Digite o valor de n: ");
    scanf("%ld", &n);

    for (int i=2 ; i<=n ; i++){
        fat *= i;
        //fat = fat * i;
    }

    printf("O fatorial de %ld eh %ld\n", n,fat);

    return 0;
}
