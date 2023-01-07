#include <stdio.h>
#include <string.h>

int main(){
    int iA, iD=0, i, sizeB, sizeC;
    char encontrou=0;
    int count=0;
    char A[1000],B[256],C[256],D[1000];
    char *pont, *pontOld;

    // gets(A);
    // gets(B);
    // gets(C);
    fgets(A,1000, stdin);
    fgets(B,256, stdin);
    fgets(C,256, stdin);
    A[strlen(A)-1] = '\0';
    B[strlen(B)-1] = '\0';
    C[strlen(C)-1] = '\0';

    D[0] = '\0';
    sizeB = strlen(B);

    iA = 0;
    pontOld = A;
    while ((pont=strstr(pontOld,B))){
        iA = pont-pontOld;
        strncat(D,pontOld,iA);
        strcat(D,C);
        count++;
        pontOld = pont+sizeB;
    }
    strcat(D,pontOld);
    D[strlen(D)] = '\0';

    puts(D);
    printf("%d\n%d\n%d\n",(int)strlen(A),(int)strlen(D),count);
    return 0;
}

