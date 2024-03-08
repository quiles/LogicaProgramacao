#include <stdio.h>

int main(){
    int i, j, num=1;
    scanf("%d%d", &i, &j);

    for (int k=1 ; k<=j ; k++){
        num = num*i;
    }
    printf("%d^%d == %d\n\n", i,j,num);
    return 0;
}
