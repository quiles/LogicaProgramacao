#include <stdio.h>

int main(){
	char p1[20], p2[20];
	int iguais=1;
	gets(p1);
	gets(p2);

	for (i=0 ; i<strlen(p1) ; i++){
		if (p1[i] != p2[i]){
			iguais = 0;
			break;
		}
	}
	if (iguais) printf("Iguais\n");
	else printf("Diferentes");
	
	return 0;
}