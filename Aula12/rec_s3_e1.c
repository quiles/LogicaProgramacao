#include <stdio.h>

int contaDigitos(int n) {
    if (n < 10) {
        return 1;
    } else {
        return 1 + contaDigitos(n / 10);
    }
}

int div(int n, int m){
    if (n < m){
        return 0;
    } else {
        return 1 + div(n - m, m);
    }
}

int mdc(int n, int m){
    if (n == m){
        return n;
    } else if (n > m){
        return mdc(n - m, m);
    } else {
        return mdc(n, m - n);
    }
}

int mdc2(int n, int m){
    if (m==0)
        return n;
    else
        return mdc2(m, n%m);
}


int main(){
    int n, m;
    printf("Digite um numero: ");
    scanf("%d%d", &n, &m);
    printf("MDC %d:%d = %d\n", n, m, mdc2(n, m));
//   printf("%d / %d = %d\n", n, m, div(n, m));
//    printf("O numero %d tem %d digitos\n", n, contaDigitos(n));
    return 0;

}