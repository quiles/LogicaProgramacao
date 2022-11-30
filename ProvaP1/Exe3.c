/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/



#include <stdio>


int main(){
	float a, b, total=1;
	scanf("%f%f", &a, &b);
	for (int i=1 ; i<=(a*b) ; i++){
		total = total*2;
	}
	printf("%f\n", total);

	return 0;
}







