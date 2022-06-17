#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main (){
    int dado, aposta;
    float saldo;
    int comando = 1;
    srand(time(NULL));
    printf ("quanto de dinheiro ira apostar?\n");
    scanf ("%f",&saldo);
    do{
        printf ("seu montante final é %.2f", saldo);
        printf("\nqual face a aposta vai?\n");
        scanf ("%d", &aposta);
        dado = rand()%6+1;
        if (dado == aposta){
            saldo += 1.0;
            printf ("%d\nparabens, vamos mais uma?(1/0)\n", dado);
        }
        else {
            saldo = saldo - 0.2;
            if (saldo != 0){
                    printf ("%d\nque pena, errou, quer tentar de novo?(y/n)\n", dado);
            }
            else {
                printf ("que pena, voce perdeu todo seu saldo");
                break;
            }
        }
        scanf("%d",&comando);
    } while (comando != 0);
    if (saldo != 0) printf ("seu montante final é %.2f", saldo);
    return 0;
}