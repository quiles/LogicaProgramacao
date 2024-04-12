/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a[128], k, i, encontrou=0;
    srand(time(0));

    // gerando valores aleatorios entre 0 e 99
    for (i=0 ; i<128 ; i++) {
        a[i] = rand()%100; 
        printf("%d ", a[i]);
    }

    printf("\n\nDigite a chave k desejada: ");
    scanf("%d", &k);

    // procurando o numero k
    for (i=0 ; i<128 ; i++) {
        if (k == a[i]){
            encontrou = 1;
            printf("Chave %d encontrada na posicao %d\n", k, i);
            break; // remover o break para imprimir todas as posicoes no qual k eh encontrado
        }
    }


	return 0;
}