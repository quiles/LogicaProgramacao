





struct TMusica{
	float duracao;
	char nome[1000];
	char interprete[1000];
//	... demais campos
 };


struct TDisco{
	struct TMusica musicas[20];
	char nome_disco[1000];
	int qtd_musicas;
//	... demais campos
}




int main(){
	struct TDisco discos[100];
	int i, j;
	for (i=0 ; i<qtdDiscos ; i++){
		// impressao do nome do disco
		puts(discos[i].nome_disco);
		for (j=0 ; j<discos[i].qtd_musicas ; j++)
			// impressao dos nomes das músicas de cada disco
			puts(discos[i].musicas[j].nome);
	return 0;
}




