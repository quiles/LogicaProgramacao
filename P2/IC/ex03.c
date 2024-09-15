#include <stdio.h>
#include <string.h>

int chamadas(int n){
    if (n<2) return 1;
    else return 1 + chamadas(n-1) + chamadas(n-2);
}


int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Quantidade de chamadas: %d\n", chamadas(num));

    return 0;

}