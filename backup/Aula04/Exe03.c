/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>


int main(){
	int n=1; 
	while (n<=500) { 
		if (n%5==0)
			printf("%d\n",n);
		else 
			printf(".\n");
	
		n = n + 1;
	}
	return 0;
}