/*********************************
 *  Lógica de Programação
 * 	Linguagem C
 *  Prof. Dr. Marcos G. Quiles
 ********************************/

#include <stdio>


int main(){
	float a, b, c, x1, x2, delta;

	scanf("%f%f%f",&a,&b,&c);
	if (a!=0){
		delta = b*b-4.0*a*c;
		if (delta >= 0){
			x1 = (-b + sqrt(delta))/(2.0*a);
			x2 = (-b - sqrt(delta))/(2.0*a);
			// printf x1, x2

		}
		else {
			// nao existem raizes reais
		}

	}

	return 0;
}