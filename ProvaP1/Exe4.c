/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

// Questão 04

#include <stdio>


int main(){
	int i;
	float notas[20], media=0, maior, menor;
	for (i=0 ; i<20 ; i++){
		do {
			scanf("%f", &(notas[i]));
		} while (notas[i] < 0 || notas[i] > 10);
	}
	maior = menor = notas[0];
	for (i=1 ; i<20 ; i++){
		if (notas[i]>maior) maior = notas[i];
		if (notas[i]<menor) menor = notas[i];
		media += notas[i];
	}
	printf("%f %f %f", media/20.0, maior, menor);
	return 0;
}







