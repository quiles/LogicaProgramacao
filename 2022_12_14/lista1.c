#include <stdio.h>





int anagrama(char p[], int ini, int fim){
	if (fim <= ini) return 1;
	else {
		if (p[ini] == p[fim]) {
			return anagrama(p, ini+1, fim-1);
		}
		else return 0;
	}


}