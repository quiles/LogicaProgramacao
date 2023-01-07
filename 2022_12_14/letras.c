#include <stdio.h>
#include <string.h>

int main(){
	char frase[] = "Zz Marcos Quiles  &*&*&";
	int i, min=0, mai=0, outras=0;

	for (i=0 ; i<strlen(frase) ; i++){
		if (frase[i] <= 'z' && 
			frase[i] >= 'a') min++;
		else if (frase[i] <= 'Z' && 
			frase[i] >= 'A') mai++;
		else outras++;
	}
	printf("Original: %s\n", frase);

	for (i=0 ; i<strlen(frase) ; i++)
		if ((frase[i] >= 'a' && frase[i] <= 'z') ||
			(frase[i] >= 'A' && frase[i] <= 'Z')){
			frase[i]++;
		}

	printf("Nova frase: %s\n", frase);

	printf("Quantidade Minusculas: %d\n", min);
	printf("Quantidade Maius: %d\n", mai);
	printf("Quantidade Outras: %d\n", outras);
	return 0;
}