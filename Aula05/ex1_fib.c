/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	// long int para ampliar a faixa de valores tratados (usar %ld)
	long int i, n, fib, f1=0, f2=1;
	printf("Digite a quantidade de termos: ");
	scanf("%ld", &n);
	
	// impressao da base (primeiro e segundo termos)
	if (n>0)
		printf("Fib[0] == %ld\n",f1);
	if (n>1)
		printf("Fib[1] == %ld\n",f2);
	for (i=3 ; i<=n ; i++){
		fib = f1+f2;
		f1 = f2;
		f2 = fib;
		printf("Fib[%ld] == %ld\n",i-1,fib);
	}
	return 0;
}

