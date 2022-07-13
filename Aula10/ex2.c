#include <stdio.h>
#include <string.h>
#define MAX 5

int main(){
	char nomes[5][MAX];
	int i, qtd=0;

	for (i=0 ; i<5 ; i++) {
		// fgets(nomes[i], MAX, stdin);
		gets(nomes[i]);
		// nomes[i][strlen(nomes[i])-1] = '\0';
	}

	for (i=0 ; i<5 ; i++)
		puts(nomes[i]);


	return 0;
}