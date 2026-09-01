#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char letra;
	
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
		printf("sua letra é uma vogal");
	else
		printf("sua letra é consoante");
	
	
	return 0;
}
