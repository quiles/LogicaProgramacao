/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(){
    int primo=TRUE, num, i;
    printf("Digite um número natural: ");
    scanf("%d", &num);
    for (i=2 ; i<=num/2 ; i++){
        if (num % i == 0){
            primo = FALSE;
            break;
        }
    }
    if (primo) printf("O numero %d eh primo\n", num);
    else printf("O numero %d nao eh primo\n", num);

	return 0;
}