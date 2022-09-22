/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

 #include <stdio.h>

int main(){
	int i, j, mult=1;
	printf("Digite o valor de i e j para i^j: ");
	scanf("%d%d", &i, &j);

	for (int k=1 ; k<=j ; k++){
		mult = mult*i;
	}
	printf("%d elevado a %d eh %d\n\n", i, j, mult);
	return 0;
}