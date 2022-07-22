/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int soma(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int divI(int a, int b){
	if (b) return a/b;
	else return 0;
}

float divF(int a, int b){
	if (b) return (float)a/(float)b;
	else return 0.0;
}


int main(){
	printf("Valor da Soma: %d\n", soma(10,20));
	printf("Valor da Subtracao: %d\n", sub(10,20));
	printf("Valor da Multiplicacao: %d\n", mul(10,20));
	printf("Valor da Divisao Inteira: %d\n", divI(10,20));
	printf("Valor da Divisao Real: %f\n", divF(10,20));
	return 0;
}