#include <stdio.h>

typedef struct {
	int campo1, b, c;
} Registro;


void cadastra(Registro reg[], int i){
	reg[i].campo1 = 999;
	reg[i].b = 999;
	reg[i].c = 111;
}

void imprima(Registro reg){
	printf("C1: %d\n", reg.campo1);
	printf("C2: %d\n", reg.b);
	printf("C3: %d\n", reg.c);
}

int main(){
	Registro m[100];
	cadastra(m);
	imprima(m[1]);

	return 0;
}