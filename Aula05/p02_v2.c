/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
    float s=1, sinal=-1, x, num=1, den=1, termo;
    int i,t;
    scanf("%f", &x);

    for (t=1 ; t<20 ; t++){
        num = num*x*x;
        den = den * (t*2)*(t*2+1);

        termo = num / den;
        s = s + sinal*termo;
        sinal = sinal * (-1);
    }
    return 0;
}
