/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Impressao da Tabela ASCII

#include <stdio.h>


int main(){
	char c;
	
	for (c=0 ; c<127 ; c++){
		printf("[%d] - %c\n", c, c);
	}

	return 0;
}