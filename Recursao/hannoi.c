// Torre de Hannoi para n discos

#include <stdio.h>

void towers (int n, char from , char to , char aux) {
    if (n==1)
        printf("move disco %d da estaca %c p/ a estaca %c\n",
        1, from , to );
    else {
        towers (n-1, from , aux , to );
        printf ("move disco %d da estaca %c p/ a estaca %c\n",
        n, from , to );
        towers (n-1, aux , to , from );
    }
}



int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    towers(n,'A', 'C', 'B');
    return 0;
}
