#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int x1,x2,y1,y2;
    float dist,cat1,cat2;
    
	printf("Insira os valores para p1(x1):");
	scanf("%d", &x1);
	printf("Insira os valores para p1(y1):");
	scanf("%d", &y1);
	printf("Insira os valores para p2(x2):");
	scanf("%d", &x2);
	printf("Insira os valores para p2(y2):");
	scanf("%d", &y2);
	
	printf("Leitura(p1): (%d,%d)", x1,y1);
	printf("\nLeitura(p2): (%d,%d)", x2,y2);
	
	cat1 = pow((x2-x1), 2);
	cat2 = pow((y2-y1), 2);
	
	dist = sqrt(cat1+cat2);
	
	printf("Distacia é %f", dist);
	
	return 0;	
}
