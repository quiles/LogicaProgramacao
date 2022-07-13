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

int div(int a, int b){
	if (b) return a/b;
	else return 0;
}


int main(){

	printf("Valor da Soma: %d\n", soma(10,20));
	return 0;
}