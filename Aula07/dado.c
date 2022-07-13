/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>

#define FACES 10
#define LANCES 10000

int main(){
	int faces[FACES], dado, i;

	for (i=0 ; i<FACES ; i++) faces[i] = 0;

	for (i=0 ; i<LANCES ; i++){
		dado = rand()%FACES;
		faces[dado]++;
	}

	for (i=0 ; i<FACES ; i++)
		printf("Face[%d]: %d\n", i+1, faces[i]);
	return 0;
}