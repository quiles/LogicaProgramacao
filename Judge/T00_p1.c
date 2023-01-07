/*********************************
 *  Lógica de Programação
 *    Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio.h>

int main(){
   int fat=1, n, i;
   scanf("%d", &n);
   if (n>=0) {
      for (i=1 ; i<=n ; i++)
         fat = fat * i;
      printf("%d\n", fat);   
   }
   else {
      printf("NaN\n");
   }
   return 0;
}

