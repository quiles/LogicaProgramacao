#include <stdio.h>

int main(){
    int n, i, j;
    float termo=1, s=0.0, sinal=1, num, den=1.0;
    printf("digite o numero de termos: ");
    scanf("%d", &n);
    for (i=1 ; i<=n ; i++){
        num = i*2-1;
        den *= i;
        termo = num / den;
        s += sinal*termo;
        sinal *= (-1);
    }
    printf("%f", s);

}