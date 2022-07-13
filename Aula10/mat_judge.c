#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main(){
	int m[MAX][MAX], v[101];
	int i,j, l, c;

	for (i=0 ; i<101 ; i++) v[i] = 0;

	scanf("%d %d", &l, &c);
	for (i=0 ; i<l ; i++){
		for (j=0 ; j<c ; j++){
			m[i][j] = rand()%101;
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}

	for (i=0 ; i<l ; i++){
		for (j=0 ; j<c ; j++){
			v[   m[i][j]    ]++;
		}
	}

	for (i=0 ; i<101 ; i++){
		if (v[i]) printf("%d %d\n", i,v[i]);
	}

	return 0;
}