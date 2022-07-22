/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>

void towers(int n, char from, char to, char aux) {
	if (n==1)
		printf("move disco %d da estaca %c p/ a estaca %c\n", 1, from, to);
	else {
		towers(n-1, from, aux, to); 
		printf("move disco %d da estaca %c p/ a estaca %c\n", n, from, to); 
		towers(n-1, aux, to, from);
	}
}

// para executar o código, use o nome do programa gerado + o número de discos,
// por exemplo: $ ./run 3

int main(int argc, char *argv[]){
	
	if (argc < 2) {
		printf("\nDeve se informar o número de discos\n");
		printf("\t i.e. $ run 5\n\n");
	}
	else {
		towers(atoi(argv[1]),'A', 'B', 'C');
	}
	return 0;
}


