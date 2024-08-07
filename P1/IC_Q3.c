#include <stdio.h>

int fatorial(int n) {
    int i, fat=1;
    for (i=2 ; i<=n ; i++)
        fat *= i;
    return fat;
}

int main() {
    int N, i;
    double S = 0.0, termo;

    printf("Digite o numero de termos N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        termo = (2 * i - 1) / (double) fatorial(i);
        if (i % 2 == 0) {
            S -= termo;
        } else {
            S += termo;
        }
    }

    printf("O valor da serie S e: %lf\n", S);

    return 0;
}
