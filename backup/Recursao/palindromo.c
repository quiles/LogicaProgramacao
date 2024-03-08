#include <stdio.h>

int palin(char palavra[], int i, int j){
    if (i>=j) return 1;
    else {
        if (palavra[i] == palavra[j])
            return palin(palavra,i+1,j-1);
        else return 0;
    }
}

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    if (palin(palavra,0,strlen(palavra)-1))
        printf("A palavra %s é um palíndromo\n", palavra);
    else
        printf("A palavra %s não é um palíndromo\n", palavra);
    return 0;
}