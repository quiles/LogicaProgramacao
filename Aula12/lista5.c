#include <stdio.h>
#include <limits.h>


void func1(int n){ // imprime de 1 ate n
    if (n==0) return;
    else {
        func1(n-1);
        printf("%d ",n);
    }
}

void func2(int n){ // imprime de n ate 1
    if (n==0) return;
    else {
        printf("%d ",n);
        func2(n-1);
    }
}

int somatorio(int n){ // somatorio de 1 ate n
    if (n==1) return 1;
    else return n + somatorio(n-1);
}

void impares(int n){ // imprime os numeros impares de 1 ate n
    if (n==1) printf("%d ", n);
    else {
        impares(n-1);
        if (n%2) printf("%d ", n);
    }
}

void pares(int n){ // idem para os numeros pares
    if (n==0) printf("%d ", n);
    else {
        pares(n-1);
        if (!(n%2)) printf("%d ", n);
    }
}

int fat_ate_n(int n){ // imprime os fatoriais de 1 ate n
    int f=1;
    if (n<2) {
            printf("%d ", 1);
            return 1;
    }
    else {
        f = n*fat_ate_n(n-1);
        printf("%d ", f);
        return f;
    }
}

int multiplica(int a, int b){ // multiplica a*b usando +
    if (b==1) return a;
    else return a+multiplica(a,b-1);
}

int ordenado(int v[], int n){ // verifica se um vetor estar ordenado
    if (n==1) return v[0];    // retorn INT_MAX quando nao estar ordenado
    else {                    // retorna o ultimo valor quando estiver ordenado
        if (v[n-1] >= ordenado(v, n-1)) return v[n-1];
        else return INT_MAX;
    }
}

void espaco(char s[], int n){ // adiciona um espaco apos cada caractere de string
    if (n==0) return;
    else {
        s[(n-1)*2] = s[n-1];
        s[(n-1)*2+1] = ' ';
        espaco(s, n-1);
    }
}

int main(){
    int vet[] = {1,2,3,4,5,6};
    char p1[100], p2[100];
    scanf("%s", p1);
    espaco(p1, strlen(p1));
    printf("\nString com espacos: %s\n",p1);

    if (ordenado(vet, 6) == INT_MAX)
        printf("\nVetor nao Ordenado\n");
    else
        printf("\nVetor Ordenado\n");
    func1(10);
    printf("\n");
    func2(10);
    printf("\n");
    impares(20);
    printf("\n");
    pares(20);
    printf("\n");
    fat_ate_n(8);
    printf("\n");
    printf("\nSomatorio: %d\n", somatorio(15));
    printf("\n%d * %d == %d\n", 5,7,multiplica(5,7));

    return 0;
}
