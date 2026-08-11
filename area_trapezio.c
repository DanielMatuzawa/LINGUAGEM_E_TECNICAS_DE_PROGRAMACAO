#include <stdio.h>
#include <stdlib.h>
#define pi 3.141597

int main() {
	float B,b,h,area;
	
	printf("Insira um Valor para B :\n");
	scanf("%f", &B);
	printf("Insira um Valor para b :\n");
	scanf("%f", &b);
	printf("Insira um Valor para h :\n");
	scanf("%f", &h);
	
	area = ((B+b)*h)/2;
	
	printf("o Valor do Trapézio de base maior %f, de base menor %f e altura %f e igual a %f", B,b,h,area);
}
