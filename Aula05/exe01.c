/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

void main(){
    int n, fib, f1=0, f2=1;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i++){
        if (i<=2) fib = i-1;
        else {
            fib = f1+f2;
            f1 = f2;
            f2 = fib;
        }
        printf("FIB[%d] --> %d\n",i, fib);
    }
}
