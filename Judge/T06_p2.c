#include <stdio.h>
#include <string.h>

int main(){
	char frase[1000];
	int i, lmin[26], lmai[26], nonc=0;

	fgets(frase,1000, stdin);

	for (i=0 ; i<26 ; i++){
		lmin[i] = lmai[i] = 0;
	}

	for (i=0 ; i<strlen(frase) ; i++){
		if (frase[i] >= 'a' && frase[i] <= 'z')
			lmin[frase[i]-97]++;
		else if (frase[i] >= 'A' && frase[i] <= 'Z')
			lmai[frase[i]-65]++;
		else nonc++;
	}

	for (i=0 ; i<26 ; i++){
		printf("%c - %d\n",i+97,lmin[i]);
	for (i=0 ; i<26 ; i++){
		printf("%c - %d\n",i+65,lmai[i]);
	printf("? - %d\n",nonc);



}