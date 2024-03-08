#include <stdio.h>

int main(){
    float N, r, t, DT;
    printf("Digite a populacao inicial: ");
    scanf("%f", &N);
    printf("Digite a taxa r: ");
    scanf("%f", &r);
    printf("Digite o passo DT: ");
    scanf("%f", &DT);

    for (t=1.0 ; t<=100 ; t+=DT){
        N = N + r*N*DT;
        printf("\tN(%.1f) == %f\n", t, N);
    }


    return 0;
}
