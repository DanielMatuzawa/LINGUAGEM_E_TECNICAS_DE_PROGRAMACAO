
#include <stdio.h>

int main() {
    int numero;
    int binario[7];
    int i = 0, j;

    printf("Digite um numero entre 1 e 64: ");
    scanf("%d", &numero);


    if (numero < 1 || numero > 64) {
        printf("Numero invalido!\n");
    } else {


        while (numero > 0) {
            binario[i] = numero % 2;
            numero = numero / 2;
            i++;
        }


        printf("Valor em binario: ");

        for (j = i - 1; j >= 0; j--) {
            printf("%d", binario[j]);
        }

        printf("\n");
    }

    return 0;
}
