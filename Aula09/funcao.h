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
