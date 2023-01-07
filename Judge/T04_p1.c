#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// #include <float.h>
// #include <limits.h>

#define M 30
#define MAX 101
int main(){
    int m[M][M];
    int M1,M2;
    int count[MAX];
    int i,j;
    
    scanf("%d %d", &M1, &M2);
    
    for (i=0 ; i<MAX ; i++) count[i] = 0;
    
    for (i=0 ; i<M1 ; i++){
        for (j=0 ; j<M2 ; j++){
            scanf("%d", &(m[i][j]));
        }
    }

    for (i=0 ; i<M1 ; i++){
        for (j=0 ; j<M2 ; j++){
            count[m[i][j]]++;
        }
    }
    
    for (i=0 ; i<MAX ; i++){
        if (count[i])
            printf("%d %d\n",i,count[i]);
    }

	return 0;
}
