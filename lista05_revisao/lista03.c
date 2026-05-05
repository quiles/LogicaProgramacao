#include <stdio.h>


int main(){
    float massa, T1, T2, Tfus, cs, cl, L;
    float tS, tL, cal=0.0;
    printf("Digite a massa: ");
    scanf("%f", &massa);
    printf("Digite T1: ");
    scanf("%f", &T1);
    printf("Digite T2: ");
    scanf("%f", &T2);
    printf("Digite Tfus: ");
    scanf("%f", &Tfus);
    printf("Digite cs: ");
    scanf("%f", &cs);
    printf("Digite cl: ");
    scanf("%f", &cl);
    printf("Digite L: ");
    scanf("%f", &L);
    tS = Tfus - T1;
    if (tS<0) tS *= (-1.0);
    tL = T2 - Tfus;
    if (tL<0) tL *= (-1.0);
    cal = massa*cs*tS;
    cal += massa*L;
    cal += massa*cl*tL;
    printf("O número de calorias para ir de %.1fC até %.1fC é %.1f calorias\n", T1, T2, cal);
    return 0;
}