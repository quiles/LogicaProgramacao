#include <stdio.h>

int main() {
    int x, h, h1=10, h2=8, i;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    if (x<3) h = 1;
    else if (x<6) h = x*2;
    else {
        for (i=6 ; i<=x ; i++){
            h = h1+h2;
            h2 = h1;
            h1 = h;
        }
    }

    printf("O resultado h(%d): %d\n", x, h);

    return 0;
}
