/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
    int num, i, primo=1;

    printf("Digite um numero: ");
    scanf("%d", &num);
    for (i=2 ; i<=num/2 ; i++){
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }
    if (primo) printf("O numero %d eh primo\n", num);
    else printf("O numero %d não eh primo\n", num);
    return 0;
}
