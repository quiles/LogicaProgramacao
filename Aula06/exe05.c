/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(){
    int primo, num, i, a, b;
    printf("Digite o intervalo [a,b]: ");
    scanf("%d%d", &a, &b);
    for (num=a ; num<=b ; num++){
        primo = TRUE;
        for (i=2 ; i<=num/2 ; i++){
            if (num % i == 0){
                primo = FALSE;
                break;
            }
        }
        if (primo) printf("O numero %d eh primo\n", num);
    }

	return 0;
}