

int funcao(char frase[]){
	int qtd=0;
	for (int i=0 ; i<strlen(frase) ; i++){
		if (frase[i]>='a' && frase[i]<='z'){
			frase[i] -= 32;
			qtd++;
		}
	}
	return qtd;
}