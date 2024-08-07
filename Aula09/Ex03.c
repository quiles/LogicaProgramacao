#include <stdio.h>

int fib(int n){
    int f=1, f1=1, f2=0;
    if (n<0) return -1;
    else if (n<2) return n;
    else {
        for (int i=2 ; i<=n ; i++){
            f = f1+f2;
            f2 = f1;
            f1 = f;
        }
        return f;
    }
}

int main(){
    int n;
    printf("Digite o termo da sequencia de Fibonacci desejado: ");
    scanf("%d", &n);
    printf("O %d-esimo termo da sequencia de Fibonacci e %d\n", n, fib(n));
    return 0;
}