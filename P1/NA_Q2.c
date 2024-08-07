#include <stdio.h>

int main() {
    int numero, digito;
    int contagem[10] = {0}; // Vetor para armazenar a contagem de cada dígito

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        contagem[digito]++;
        numero /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("Numero de digitos %d: %d\n", i, contagem[i]);
    }

    return 0;
}
