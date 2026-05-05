#include <stdio.h>

int main(){
    int i, j, simetrica=1, max;
    printf("Digite o tamanho da matriz nxn: ");
    scanf("%d", &max);
    int M[max][max];
    printf("Digite os valores da Matriz:\n");
    for (i=0 ; i<max ; i++){
        for (j=0 ; j<max ; j++){
            scanf("%d", &M[i][j]);
        }
    }
    for (i=0 ; i<max-1 ; i++){
        for (j=i+1 ; j<max ; j++){
            if (M[i][j] != M[j][i]){
                printf("Matriz não simétrica\n");
                simetrica=0;
                i=j=3;
            }
        }
    }
    if (simetrica) printf("Matriz simétrica\n");
    return 0;
}