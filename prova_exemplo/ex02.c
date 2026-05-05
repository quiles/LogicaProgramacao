#include <stdio.h>

int main(){
    int a, b, p, res=1;
    printf("Digite o valor de a [1, 20]: ");
    do {
        scanf("%d", &a);
    } while (a<1 || a>20);
    printf("Digite o valor de b [1, 20]: ");
    do {
        scanf("%d", &b);
    } while (b<1 || b>20);

    for (p=1 ; p<=(a*b) ; p++){
        res *= (a+b);
    }
    printf("O resultado é: %d\n\n", res);
    return 0;
}