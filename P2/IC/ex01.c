#include <stdio.h>
#include <string.h>

int iterativa(char st[]){
    int count=0, i, j;
    for (i=0 ; i<strlen(st) ; i++){
        if (st[i] == ' '){
            count++;
            for (j=i ; j<strlen(st) ; j++){
                st[j] = st[j+1];
            }
        }
    }
    return count;
}

int main(){
    int count;
    char st[200];
    printf("Digite uma frase: ");
    scanf("%[^\n]", st);
    printf("String Original: %s\n", st);
    count = iterativa(st);
    printf("String sem espaços: %s\n", st);
    printf("Espacos removidos: %d\n", count);

    return 0;
}