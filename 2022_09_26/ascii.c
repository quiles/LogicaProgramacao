/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Impressão da Tabela ASCII

#include <stdio.h>


int main(){
	unsigned char a;
	for (a=0 ; a<128 ; a++){
		printf("%d -> [%c]\n",a,a);
	}
	return 0;
}