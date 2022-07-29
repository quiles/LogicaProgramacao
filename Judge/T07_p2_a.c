#include <stdio.h>
#include <string.h>

#define MAX 1000

int main(){
    int iA, iD=0, i, sizeB, sizeC;
    char encontrou=0;
    int count=0;
    char A[MAX],B[MAX],C[MAX],D[MAX];
    
    fgets(A,MAX,stdin);
    fgets(B,MAX,stdin);
    fgets(C,MAX,stdin);

    A[strlen(A)-1] = '\0';
    B[strlen(B)-1] = '\0';
    C[strlen(C)-1] = '\0';
    
    sizeB = strlen(B);
    sizeC = strlen(C);

    for (iA=0 ; iA<=strlen(A) ; iA++){
        encontrou=0;
        if (A[iA] == B[0]){ // encontrou a primeira letra da palavra de busca
            encontrou=1;
            for (i=1 ; i<sizeB ; i++){
                if (A[iA+i] != B[i]) {
                    encontrou=0;
                    break;
                }
            }
        }
        if (!encontrou) D[iD++] = A[iA]; // copia direta da string A em D
        else {
            count++;
            for (i=0 ; i<sizeC ; i++){ // substituição da palavra B em A por C em D, reposicionamento dos indices
                D[iD++] = C[i]; // copia de C em D
            }
            iA += sizeB-1;
        }
        
    }

    puts(D);
    printf("%d\n%d\n%d\n",(int)strlen(A),(int)strlen(D),count);
    return 0;
}

