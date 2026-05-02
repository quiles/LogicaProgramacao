#include <stdio.h>

int main(){
    float a, b, c;
    printf("Digite os segmentos a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a<b+c) && (b<a+c) && (c<b+a))
        if ((a==b) && (b==c))
            printf("\n\n\tEquilátero");
        else 
            if ((a==b) || (a==c) || (b==c))
                printf("\n\n\tIsosceles.");
            else
                printf("\n\n\tEscaleno.");
    else
        printf("\n\n\tNão e um triangulo");
    printf("\n\n");
    return 0;
}