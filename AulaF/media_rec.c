#include <stdio.h>

float media_vec(int v[], int n){
	if (n==1) return v[0];
	else {
		return (v[n-1]+(n-1)*media(v,n-1))/n;
	}
}



int main(){
	int vet[]=[6,4,3,1,4,5,7,2,5,4];
	float media;

	media = media_vet(vet,10);

}