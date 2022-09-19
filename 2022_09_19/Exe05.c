#include <stdio.h>

int main(){
	float fI, fF, inc, c, f;
	scanf("%f%f%f", &fI, &fF, &inc);
	f = fI;
	while (f<=fF) {
		c = 5.0 * (f - 32.0) / 9.0;
		printf("%.2f C --> %.2f F\n", c, f);
		f = f + inc;
	}
	return 0;
}