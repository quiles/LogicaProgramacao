// Diversos algoritmos recursivos

#include <stdio.h>

int menor(int v[], int n){
    int min;
    if (n==1) return v[0];
    else {
        min = menor(v,n-1);
        if (min > v[n-1]) return v[n-1];
        else return min;
    }
}

int soma(int v[], int n){
    if (n==1) return v[0];
    else v[n-1] + soma(v,n-1);
}


int palin(char palavra[], int i, int j){
    if (i>=j) return 1;
    else {
        if (palavra[i] == palavra[j])
            return palin(palavra,i+1,j-1);
        else return 0;
    }

}

int somap(int v[], int n){
    int s;
    if (n==1) {
        if (v[0]%2==0) return v[0];
        else return 0;
    }
    else {
        s = somap(v,n-1);
        if (v[n-1]%2==0) return v[n-1]+s;
        else return s;
    }
}

int divi(int x, int y){
    if (x<y) return 0;
    else return 1 + divi(x-y,y);
}


int mdc(int a, int b){
    if (a%b==0) return b;
    else return mdc(b,a%b);
}


int media(int v[], int n){
    if (n==1) return v[0];
    else (v[n-1] + media(v,n-1)*(n-1)) / n;
}

int pow(int x, int y){
    if (y==0) return 1;
    else return x*pow(x,y-1);

}

int qtddig(int n){
    if (n/10 == 0) return 1;
    else return 1 + qtddig(n/10);
}


int main(){
    int vetor[10], i;
    for (i=0 ; i<10 ; i++){
        vetor[i] = rand()%100;
        printf("%d ", vetor[i]);
    }
    printf("\nMenor: %d\n\n", menor(vetor, 10));
    printf("%d %d -> %d\n", 3654, 1365, mdc(3654,1365));

    return 0;
}
