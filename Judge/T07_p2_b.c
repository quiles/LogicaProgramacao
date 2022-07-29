#include <stdio.h>
#include <string.h>

int main(){
    int iA, iD=0, i, sizeB, sizeC;
    char encontrou=0;
    int count=0;
    char A[1000],B[256],C[256],D[1000];
    char *pont, *pontOld;

//    char A[1000]="Winter Is Coming. O Inverno Esta Chegando.",
//         B[256]=".",
//         C[256]="?",
//         D[256];

    gets(A);
    gets(B);
    gets(C);
    
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
    

    puts(D);
    printf("%d\n%d\n%d\n",(int)strlen(A),(int)strlen(D),count);
    return 0;
}

