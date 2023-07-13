// Verifica se um dado vetor está ordenado ou não

#include <stdio.h>
#include <string.h>

int is_sorted(int v[], int m){
    if (m==1) return 1;
    else {
        if (v[m-1] > v[m-2]) return is_sorted(v,m-1);
        else return 0;
    }
}

int main(){
    int v[]={1,2,3,6,7};
    printf("Resultado: %d\n", is_sorted(v,5));
    return 0;
}
