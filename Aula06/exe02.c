/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>

int main(){
	long int n, s1=0, termo, i, p;

	scanf("%ld", &n);
	if (n<0 || n>15)
		printf("NaN");
	else {
		for (i=1 ; i<=n ; i++){
			termo = 1;
			for (p=1 ; p<=i ; p++){
				termo = termo*i;
			}
			s1 = s1 + termo;
		}
		printf("%ld",s1);
	}
	return 0;
}