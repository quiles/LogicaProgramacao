#include <stdio.h>
#include <stdlib.h>

void towers(int n, char from, char to, char aux) { 
	if (n==1)
		printf("move disco %d da estaca %c p/ a estaca %c\n",1, from, to);
	else {
		towers(n-1, from, aux, to); 
		printf("move disco %d da estaca %c p/ a estaca %c\n", n, from, to); 
		towers(n-1, aux, to, from);
	} 
}

int main(int argc, char *argv[]){
	towers(atoi(argv[1]), 'A', 'B', 'C');
	return 0;
}