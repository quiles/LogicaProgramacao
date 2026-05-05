#include <stdio.h>

int main(){
    int x, g, g1, g2, i;
    scanf("%d", &x);
    if (x < 5) printf("%d ", 2+x);
    else {
        g1 = 6;
        g2 = 5;
        for (i=5 ; i<=x ; i++){
            g = g1*g2;
            g2 = g1;
            g1 = g;
        }
        printf("%d ", g);
    }
    return 0;
}