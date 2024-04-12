/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, dado, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0, i;
    srand(time(0)); // função usada para iniciar a semente do gerador (srand) aleatório com o clock do computador (time)
    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);

    printf("Sorteios: ");
    for (i=0 ; i<n ; i++){
        dado = rand()%6 + 1; // sorteio de um número inteiro entre [1 e 6]
        printf("%d ", dado);
        switch(dado){
            case 1: f1++; break;
            case 2: f2++; break;
            case 3: f3++; break;
            case 4: f4++; break;
            case 5: f5++; break;
            case 6: f6++; break;
        }
    }
    printf("\n\nResultados: \n");
    printf("Face 1 foi obtida %d vezes\n", f1);
    printf("Face 2 foi obtida %d vezes\n", f2);
    printf("Face 3 foi obtida %d vezes\n", f3);
    printf("Face 4 foi obtida %d vezes\n", f4);
    printf("Face 5 foi obtida %d vezes\n", f5);
    printf("Face 6 foi obtida %d vezes\n", f6);

	return 0;
}