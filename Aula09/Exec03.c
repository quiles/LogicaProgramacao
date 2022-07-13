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







// int fib(int n, int v){
// 	int val;
// 	for (int i=0 ; i<v ; i++)
// 		printf(".");
// 	printf("Fib[%d]\n", n);
// 	if (n==0 || n==1) val = n;
// 	else val = fib(n-1,v+1)+fib(n-2,v+1);
// 	return val;
// }
