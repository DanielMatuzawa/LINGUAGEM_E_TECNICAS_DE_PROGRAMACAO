#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c, maiortemp, maior;
	
	printf("Insira 3 Números: ", a,b,c);
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<b && a>c){
		printf("o número: %d é o maior", a);
	if(b<a && b>c){
		printf("o número: %d é o maior", b);
	if(c<a && c>b){
		printf("o número: %d é o maior", c);
	
	return 0;
}
