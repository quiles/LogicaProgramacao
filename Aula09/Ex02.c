#include <stdio.h>

int fat(int n){
    int f=1;
    for (int i=2 ; i<=n ; i++){
        f *= i;
    }
    return f;
}

int main(){
    int n;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);
    printf("O fatorial de %d e %d\n", n, fat(n));
    return 0;
}