#include <stdio.h>

struct TData{
    int dia, mes, ano;
};

struct TCandidato{
    char nome[100];
    struct TData nascimento;
    struct TData ingresso;
    char vaga[100];
};

struct TPartido{
    char sigla[10];
    int numero;
    struct TCandidato candidatos[100];
};

void imprime(struct TPartido par[]){
    int p, c;
    for (p=0 ; p<10 ; p++){
        for (c=0 ; c<100 ; c++){
            printf("Nome: %s, partido: %s, vaga: %s",
                    par[p].candidatos[c].nome,
                    par[p].sigla,
                    par[p].candidatos[c].vaga);
        }
    }
}

int main(){
    struct TPartido partidos[10];

    // cadastro dados

    imprime(partidos);
    return 0;
}