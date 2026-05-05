#include <stdio.h>
#define N 10
int main(){
    int V1[N], V2[N], V3[2*N], i;
    for (i=0 ; i<N ; i++) scanf("%d", V1[i]);
    for (i=0 ; i<N ; i++) scanf("%d", V2[i]);

    for (i=0 ; i<N ; i++){
        V3[i*2] = V1[i];
        V3[i*2+1] = V2[i];
    }

}