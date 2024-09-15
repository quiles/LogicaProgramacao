
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

