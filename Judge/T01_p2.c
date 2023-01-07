/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
int main(){
	int Ini, Fim;
	int i, div, primo, resto;
	scanf("%d %d", &Ini, &Fim);

	if (Ini<2) Ini=2;
	for (i=Ini ; i<=Fim ; i++){
		primo = 1;
		if (i==2) printf("2 ");
		else {
			div = 2;
			do {
				resto = i%div;
				if (resto==0) {
					primo = 0;
				}
				div++;
			} while (div<=(i/2) && primo );
			if (primo) {
				printf("%d ",i);
			}
		}
	}
	return 0;
}
