
#include <stdio.h>

int main(){
    int num, i, primo=1;

    for (num=2 ; num<=9999999 ; num++){
        primo = 1;
        for (i=2 ; i<=num/2 ; i++){
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) printf("%d\n", num);
    }
    return 0;
}
