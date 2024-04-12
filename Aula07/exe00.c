/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, dado, faces[6], i;
    srand(time(0)); // função usada para iniciar a semente do gerador (srand) aleatório com o clock do computador (time)
    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);

    printf("Sorteios: ");
    for (i=0 ; i<n ; i++){
        dado = rand()%6 ; // sorteio de um número inteiro entre [0 e 5]
        printf("%d ", dado);
        faces[dado]++;
    }
    printf("\n\nResultados: \n");
    for (i=0 ; i<6 ; i++){
        printf("Face %d foi obtida %d vezes\n", i+1, faces[i]);
    }

	return 0;
}