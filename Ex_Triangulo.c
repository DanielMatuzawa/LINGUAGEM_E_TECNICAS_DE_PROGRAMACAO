#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){

	int base, altura;
	float area;
	
	base = 10;
	altura = 20;
	area = base*altura/2;
	
	printf("a area do triangulo de base = %d e altura = %d a area sera %f", base, altura, area);
	
	return 0;
}
