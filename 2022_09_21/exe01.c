/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

 #include <stdio.h>

int main(){
	int fib, f1=0, f2=1, n, i;
	printf("Digite o número de termos:");
	scanf("%d", &n);

	for (i=0 ; i<=n ; i++ ){
		if (i<2) fib = i;
		else {
			fib = f1 + f2;
			f1 = f2;
			f2 = fib;
		}
		printf("\tfib[%d] -> %d\n", i, fib);
	}

	return 0;
}