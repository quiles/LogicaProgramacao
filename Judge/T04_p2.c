#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// #include <float.h>
// #include <limits.h>

#define M 30
int main(){
    int m[M][M];
    int M1,M2;
    int i,j;
    
    scanf("%d %d", &M1, &M2);
    
    for (i=0 ; i<M1 ; i++){
        for (j=0 ; j<M2 ; j++){
            scanf("%d", &(m[i][j]));
        }
    }

    for (j=0 ; j<M2 ; j++){
        for (i=0 ; i<M1 ; i++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
