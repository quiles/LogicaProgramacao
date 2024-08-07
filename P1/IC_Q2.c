#include <stdio.h>

int main() {
    int a, b, res=1, i;

    do {
        printf("Digite o valor de a (1 a 20): ");
        scanf("%d", &a);
    } while (a < 1 || a > 20);

    do {
        printf("Digite o valor de b (1 a 20): ");
        scanf("%d", &b);
    } while (b < 1 || b > 20);

    for (i=0 ; i<(a*b) ; i++){
        res = res*(a+b);
    }

    printf("O resultado de (a + b)^(a * b) e: %d\n", res);

    return 0;
}
