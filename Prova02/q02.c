

int funcaoI(int v[], int n){
	int i, prod=1;
	for (i=0 ; i<n ; i++){
		if (v[i] % 3 == 0)
			prod *= v[i];
	}
	return prod;
}

int funcaoR(int v[100], int n){
	if (n==1){
		if (v[0] % 3 == 0) return v[0];
		else return 1;	
	} 
	else {
		if (v[n-1] % 3 == 0) 
			return v[n-1]*funcaoR(v, n-1);
		else 
			return funcaoR(v, n-1);	
	}
}

