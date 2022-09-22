/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

 #include <stdio.h>

int main(){
	int soma=0, qtd=0, n;

	do {
		printf("Digite um número: ");
		scanf("%d", &n);
		if (n!=-1){
			soma = soma+n;
			qtd = qtd+1;
		}
	} while (n!=-1);

	if (qtd) printf("\t\tA média é: %.1f\n", (float)soma / (float)qtd);

	return 0;
}