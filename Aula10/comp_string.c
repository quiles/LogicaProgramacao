/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <string.h>

int main(){
	char p1[20], p2[20];
	int iguais=1, i;
	gets(p1);
	gets(p2);

	if (strlen(p1) != strlen(p2)) {
		iguais = 0;
	}
	else {
		for (i=0 ; i<strlen(p1) ; i++){
			if (p1[i] != p2[i]){
				iguais = 0;
				break;
			}
		}
	}
	if (iguais) printf("Iguais\n");
	else printf("Diferentes\n");
	
	return 0;
}