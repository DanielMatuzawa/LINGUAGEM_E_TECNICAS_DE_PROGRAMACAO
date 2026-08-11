#include <stdio.h>
#include <stdlib.h>
#define pi 3.141597

int main() {
	float r, area;
	
	printf("Insira o valor de r :");
	scanf("%f", &r);
	
	area = pi*(r*r);
	
	printf("a area do circulo de raio %f = %f", r, area);
	
	return 0;
}
