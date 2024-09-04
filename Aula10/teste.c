#include <stdio.h>

int main() {
    char str[100];
    int val;
    // Lê uma string contendo apenas letras maiúsculas e minúsculas
    printf("Digite uma string (somente letras): ");
    val = scanf("%[abcdefghij ]", str);
    printf("Val: %d\n", val);
    printf("Você digitou: %s\n", str);

    scanf("%*s");

    return 0;
}
