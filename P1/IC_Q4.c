#include <stdio.h>

int main() {
    int x, g, g1=6, g2=5, i;
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    if (x<5) g = x+2;
    else {
        for (i=5 ; i<=x ; i++){
            g = g1*g2;
            g2 = g1;
            g1 = g;
        }
    }

    printf("O resultado g(%d): %d\n", x, g);

    return 0;
}
