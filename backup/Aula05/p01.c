#include <stdio.h>

int main(){
    float s1, s2, s3;

    do {
        printf("Digite os valores s1, s2, s3:");
        scanf("%f%f%f", &s1,&s2,&s3);
    } while (s1<s2 || s1<s3);

    if (s1 < s2+s3){
        printf("Triangulo ok\n");
        if (s1*s1 == s2*s2 + s3*s3) {
            printf("\tTriangulo Retangulo\n");
        }
        else {
            if (s1*s1 < s2*s2 + s3*s3) {
                printf("\tTriangulo Acut.\n");
            }
            else {
                printf("\tTriangulo Obt.\n");
            }
        }

    }
    else {
        printf("Lados nao formam um triangulo\n\n");
    }

}
