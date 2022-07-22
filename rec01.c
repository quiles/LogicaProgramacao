#inclue <stdio.h>

int maior(int vet[], int n){
	int m;
	if (n==1) return v[0];
	else {
		m = maior(vet, n-1);
		if (v[n-1] > m) return v[n-1];
		else return m;
	}
}


int fib(int n){
	if (n==1 || n==2) return n-1;
	else fib(n-1) + fib(n-2);
}





int main(){
	int a[10] = {1,6,4,2,2,6,9,7,5,4};
	printf("Maior valor: %d\n", maior(a,10));


}