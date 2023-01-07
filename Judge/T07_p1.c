#include <stdio.h>
#include <string.h>

int main(){
    char frase[256] = "We've got this gift of love, but love is like a precious plant. You can't just accept it and leave it in the cupboard or just think it's going to get on by itself. You've got to keep watering it.";
    int i, contador;
    
    gets(frase);
    contador = 0;
    for (i=0 ; i<strlen(frase) ; i++){
        if (frase[i]>=97 && frase[i]<=122){
            frase[i] = frase[i]-32;
            contador++;
        }
    }
    puts(frase);
    
    printf("%d\n%d\n",strlen(frase),contador);
    return 0;
}

