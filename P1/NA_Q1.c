#include <stdio.h>

int main() {
    int a, b, c, x=1, r=1, i;

    do {
        printf("Digite o valor de a (1 a 10): ");
        scanf("%d", &a);
    } while (a < 1 || a > 10);

    do {
        printf("Digite o valor de b (1 a 10): ");
        scanf("%d", &b);
    } while (b < 1 || b > 10);

    do {
        printf("Digite o valor de c (1 a 10): ");
        scanf("%d", &c);
    } while (c < 1 || c > 10);

    for (i = 0; i < b; i++) {
        x*= a;
    }

    for (i = 0; i < x; i++) {
        r*=c;
    }

    printf("O valor de r = %d\n", r);

    return 0;
}
