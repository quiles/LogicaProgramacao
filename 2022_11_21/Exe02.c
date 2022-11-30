#include <stdio.h>

int main (){
	char nomes [5][30];
	int cont;
	for (cont=0;cont<5;cont++) {
		printf ("\nInforme o nome %d: ", cont+1);
		gets(nomes[cont]); 
		}
	for (cont=0;cont<5;cont++){
		printf ("\nO nome da posicao %d eh %s",cont+1, nomes[cont]);
	}
	return 0; 
}