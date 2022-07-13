/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	float s=1, val=1;
	int n, i;
	scanf("%d", &n);
	for (i=1 ; i<=n ; i++){
		val = val * i;
		s = s + 1/val;
	}
	printf("Resultado: %f \n", s);
	return 0;
}