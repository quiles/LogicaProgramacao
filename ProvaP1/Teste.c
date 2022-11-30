
#include <stdio.h>

int soma(int x, int y){
	return x+y;
}

int fatorial(int n){
	int fat=1;
	for (int i=2 ; i<=n ; i++) fat *= i;
	return fat;
}

int fib(int n){
	int f, f1=0, f2=1;
	for (int i=1 ; i<=n ; i++){
		f = f1+f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}


int main(){
	int f;
	scanf("%d", &f);
	printf("\nFib de %d -> %d\n\n", f, fib(f));
	return 0;
}


