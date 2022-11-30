#include <stdio.h>

int main(){
	int i=0, cont=0;
	char frase[1000];
	printf("Digite uma frase: ");
	fgets(frase, 1000, stdin);

	while (frase[i] != '\0'){
		if (frase[i] == 'a') {
			frase[i] = 'b';
			cont++;
		}
		i++;
	}
	printf("Substituicoes: %d\n", cont);
	puts(frase);
	return 0;
}