#include <stdio.h>

int main(){
	int s1, s2, s3;
	printf("Digite os lados de um triangulo: ");
	scanf("%d%d%d", &s1, &s2, &s3);
	// assumir que s1 recebe o maior lado
	if (s1 < s2+s3){
		if (s1*s1 == s2*s2+s3*s3)
			printf("\tTriangulo retangulo\n");
		else if (s1*s1 > s2*s2+s3*s3)
			printf("\tTriangulo obtusangulo\n");
		else
			printf("\tTriangulo acutangulo\n");
	}
	else 
		printf("Lados não formam um triangulo\n");
	return 0;
}