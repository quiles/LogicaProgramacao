#include <stdio.h>

int main(){
    printf("A variavel do tipo char possui %d bits\n", sizeof(char)*8);
    printf("A variavel do tipo short int possui %d bits\n", sizeof(short)*8);
    printf("A variavel do tipo int possui %d bits\n", sizeof(int)*8);
    printf("A variavel do tipo long int possui %d bits\n", sizeof(long int)*8);
    printf("A variavel do tipo float possui %d bits\n", sizeof(float)*8);
    printf("A variavel do tipo double possui %d bits\n", sizeof(double)*8);
    printf("A variavel do tipo long double possui %d bits\n", sizeof(long double)*8);
    return 0;

}