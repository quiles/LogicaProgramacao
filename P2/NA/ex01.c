#include <stdio.h>
#include <string.h>

int iterativa(char st[]){
    int count=0, i;
    for (i=0 ; i<strlen(st) ; i++){
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' ||
            st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
            count ++;
    }
    return count;
}

int recursiva(char st[], int n){
    if (n==0) return 0;
    else {
        if (st[n-1] == 'a' || st[n-1] == 'e' || st[n-1] == 'i' || st[n-1] == 'o' || st[n-1] == 'u' ||
            st[n-1] == 'A' || st[n-1] == 'E' || st[n-1] == 'I' || st[n-1] == 'O' || st[n-1] == 'U')
            return 1 + recursiva(st, n-1);
        else 
            return recursiva(st, n-1);
    }
}


int main(){
    char st[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
    printf("String: %s\n", st);
    printf("Contagem (I): %d\n", iterativa(st));
    printf("Contagem (R): %d\n", recursiva(st, strlen(st)));
    return 0;
}