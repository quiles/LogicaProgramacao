#include <stdio.h>
#include <string.h>

struct TData{
    int dia, mes, ano;
};

struct TAutor{
    char nome[100];
    struct TData nascimento;
    char sexo;
};

struct TEditora{
    char nome[1000];
    char endereco[1000];
    char telefone[20];
};

struct TLivros{
    char titulo[1000];
    struct TData publicacao;
    float preco_sugerido;
    struct TEditora editora;
    struct TAutor autores[10];
};


void imprime_autores(struct TLivros livros[], char editora[]){
    int i, j;
    for (i=0 ; i<1000 ; i++){
        if (strcmp(livros[i].editora.nome, editora)==0){
            for (j=0 ; j<10 ; j++){
                printf("Autores: %s", livros[i].autores[j].nome);
            }
        }
    }
}

int main(){
    struct TLivros livros[1000];
    char editora[] = "Springer";

    // cadastro dados

    imprime_autores(livros, editora);
    
    return 0;
}