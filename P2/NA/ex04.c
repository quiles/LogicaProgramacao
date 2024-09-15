
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