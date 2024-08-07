#include <stdio.h>

int soma(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int mult(int x, int y){
    return x*y;
}
float div(int x, int y){
    if (y!=0) return (float)x/(float)y;
    else return -1;
}


int main(){
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &a, &b);
    printf("A soma %d + %d = %d\n", a, b, soma(a,b));
    printf("A subtração %d - %d = %d\n", a, b, sub(a,b));
    printf("A multiplicacao %d * %d = %d\n", a, b, mult(a,b));
    if (b != 0) printf("A divisão %d / %d = %f\n", a, b, div(a,b));
    else printf("A divisão %d / %d nao e possivel - divisao por zero\n", a, b);
    return 0;
}