/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
    float s, sinal=1, x, num=1, den=1, termo;
    int i,t;
    scanf("%f", &x);

    for (t=1 ; t<=20 ; t++){
        num = 1;
        for (i=2 ; i<=t ; i++){
            num = num*x*x;
        }

        den = 1;
        for (i=2 ; i<=(2*t-1) ; i++){
            den = den*i;
        }
        termo = num / den;
        s = s + sinal*termo;
        sinal = sinal * (-1);
    }
    return 0;
}
