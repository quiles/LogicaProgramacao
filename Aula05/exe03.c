/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
    int num;
    float soma=0.0, qtd=0.0;
    scanf("%d", &num);
    while (num != -1){
        qtd++;
        soma = soma + num;
        scanf("%d", &num);

        soma = soma * 2.0;
    }

    printf("A media eh: %.2f\n\n", soma/qtd);
    return 0;
}
