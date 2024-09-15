#include <stdio.h>
#include <string.h>

int valida(char v[]){ // verifica se a string recebida contem apenas 0's e 1's.
    int i;
    for (i=0 ; i<strlen(v) ; i++){ 
        if (v[i] != '0' && v[i] != '1') return 0;
    }
    return 1;
}

int bin2dec(char v[], int s, int p){ // versao com 3 parametros, o último controla a potencia
    if (s==1) {
        if (v[0]=='0') return 0;
        else return p;
    }
    else{
        if (v[s-1] == '0') return bin2dec(v,s-1,p*2);
        else return p + bin2dec(v,s-1, p*2); 
    }
}

int bin2dec_v2(char v[], int s){ // versao alternativa com menos parametros
    int bin;
    if (s==1) {
        if (v[0]=='0') return 0;
        else return 1;
    }
    else{
        bin = bin2dec_v2(v,s-1);
        if (v[s-1] == '0') return bin*2;
        else return 1+bin*2; 
    }
}


int bin2dec_dec(int bin){ // versao alternativa que recebe um inteiro ao inves de uma string com os bits.
    if (bin==1) return 1;
    else if (bin==0) return 0;
    else {
        return bin2dec_dec(bin%10) + 2*bin2dec_dec(bin/10);
    }
}

int main(){
    char bin[20];
    printf("Digite um número binário: ");
    scanf("%s", bin);

    if (!valida(bin)) {
        printf("\n\tUm numero binario valido deve ser fornecido\n\n");
    }
    else {
        printf("\n\tO numero binario %s representa %d em decimal\n", bin, bin2dec(bin, strlen(bin), 1));
        printf("\tO numero binario %s representa %d em decimal\n", bin, bin2dec_v2(bin, strlen(bin)));
    }
    return 0;

}