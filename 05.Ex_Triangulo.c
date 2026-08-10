#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){

	float base, altura, area;
	
	printf("Insira um Valor da Base\n");
	scanf("%f", &base);
	printf("Insira um Valor da Altura\n");
	scanf("%f", &altura);
	area = base*altura/2;
	
	printf("a area do triangulo de base = %0.2f e altura = %0.2f a area sera %0.2f", base, altura, area);
	
	return 0;
}
