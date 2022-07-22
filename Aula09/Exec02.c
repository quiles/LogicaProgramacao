/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int fatorial(int n){
	int fat=1;
	for (int i=2 ; i<=n ; i++){
		fat = fat * i;
	}
	return fat;
}

int main(){
	int n=5;
	printf("%d eh %d\n", n, fatorial(n));
	return 0;
}