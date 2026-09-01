#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char letra;
	
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	
	
	switch(letra){
		case 'a':
			printf("A de Amor");
			break;
		case 'b':
			printf("B de baixinho");
			break;
		case 'c':
			printf("C de Coração");
			break;
	}
	
		
	return 0;

}
