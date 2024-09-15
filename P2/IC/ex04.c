#include <stdio.h>
#include <string.h>


int palindromo(char p[], int i, int f){
    if (i>=f) return 1;
    else {
        if (p[i] == p[f]) return palindromo(p, i+1, f-1);
        else return 0;
    }
}

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (palindromo(palavra, 0, strlen(palavra)-1)) printf("A palavra %s eh um palindromo\n", palavra);
    else printf("A palavra %s nao eh um palindromo\n", palavra);
}