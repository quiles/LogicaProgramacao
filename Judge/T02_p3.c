/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main(){
	int i, num, qtd=0;
	int qtd7=0;
	int mult35=1;
	float media7=0;
	scanf("%d",&num);
	while (num!=-1){
		
		if (num>=0){
			qtd++;
			if (num%7==0){
				qtd7++;
				media7+=num;
			}
			if (num%5==0 && num%3==0){
				mult35 *= num;
			}
		}
		scanf("%d", &num);
	}
	if (qtd7==0) media7 = 0.0;
	else media7 /= (float)qtd7;
	printf("%d %f %d\n", qtd, media7, mult35);
	return 0;
}