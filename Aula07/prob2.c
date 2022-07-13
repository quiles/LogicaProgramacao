/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
	int a, b, i;
	float soma=0, qtd=0, media=0;
	scanf("%d %d", &a, &b);

	for (i=a ; i<=b ; i++){
		if (i%7==0 && i%2==0){
			soma = soma + i;
			qtd = qtd + 1;
		}
	}
	if (qtd != 0) media = soma / qtd;
	printf("%f", media);
	return 0;
}













