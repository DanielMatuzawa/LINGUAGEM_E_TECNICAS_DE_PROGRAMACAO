#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Insira um Valor para a soma\n");
	scanf("%d",&a);
	printf("Insira outro Valor para a soma\n");
	scanf("%d",&b);
	c = a+b;
	
	printf("o resultado de %d + %d e igual a %d",a,b,c);
	
	return 0;
}
