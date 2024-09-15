#include <stdio.h>

int soma_impares(int v[], int n){
    if (n==0) return 0;
    else {
        if (v[n-1]%2) return v[n-1] + soma_impares(v,n-1);
        else return soma_impares(v, n-1);
    }
}

int main(){
    int vet[] = {1, 2, 2, 2, 2, 3, 5, 2, 2, 2};
    printf("soma dos elementos impares: %d", soma_impares(vet,10));
    return 0;
}