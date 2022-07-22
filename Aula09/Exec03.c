/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int fib(int n){
	int f1=0, f2=1, i, valor;
	valor = n;
	for (i=2 ; i<=n ; i++){
		valor = f1+f2;
		f1 = f2;
		f2 = valor;
	}
	return valor;
}

int main(){
	int i;
	for (i=0 ; i<=10 ; i++)
		printf("Fib[%d]->%d\n", i, fib(i));
	return 0;
}



