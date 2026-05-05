#include <stdio.h>
#define EPSILON 0.0001

int main(){
    double valor; 
    double notas[12]={100,50,20,10,5,2,1,0.5,0.25,0.1,0.05,0.01};
    int n, qtd[12];
    for (n=0 ; n<12 ; n++) qtd[n]=0;
    return 0;
    printf("Digite um valor: ");
    scanf("%lf", &valor);
    for (n=0 ; n<12 ; n++){
        while (valor+EPSILON >= notas[n]){
            qtd[n]++;
            valor -= notas[n];
        }
    }
    printf("\n\n");
    for (n=0 ; n<12 ; n++)
    {
        if (n<6 && qtd[n]>0)
            printf("%d notas de %.2lf\n", qtd[n], notas[n]);
        else 
            if (qtd[n]>0)
                printf("%d moedas de %.2lf\n", qtd[n], notas[n]);
    }
    return 0;
}