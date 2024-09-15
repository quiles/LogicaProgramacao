#include <stdio.h>
#include <limits.h>

int menorvalor(int v[], int n){
    int valor;
    if (n==0) return INT_MAX; // maior inteiro na linguagem C
    else {
        valor = menorvalor(v, n-1);
        if (v[n-1]%2==0 && v[n-1] < valor) return v[n-1];
        else return valor;
    }
}

int main(){
    int vet[] = {-8,1,5,3,-1,-14,-2,10,0,12};
    printf("O menor valor par do vetor é: %d", menorvalor(vet,10));
    return 0;
}