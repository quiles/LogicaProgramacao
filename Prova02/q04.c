


int funcao(int M[MAX][MAX], 
			int linhas, 
			int colunas, 
			int col1, int col2){
	int aux, i;

	if (linhas > MAX || colunas > MAX) 
		return 1;
	if (col1 > colunas || col2 > colunas)
		return 1;

	for (i=0 ; i<linhas ; i++){
		aux = M[i][col1];
		M[i][col1] = M[i][col2];
		M[i][col2] = aux;
	}
	return 0;
}