#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c, maiortemp, maior;
	
	printf("Insira 3 Números: ", a,b,c);
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<b){
		maiortemp = b;	
	} else{
		maiortemp = a;		
	}
		
	if(maiortemp<c){
		maior = c;
		
	} else{
		maior = maiortemp;		
	}
		printf("o número: %d é o maior", maior);
	
	return 0;
}
