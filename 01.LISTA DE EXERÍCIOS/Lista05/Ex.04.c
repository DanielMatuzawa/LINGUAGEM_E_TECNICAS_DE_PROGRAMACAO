
#include <stdio.h>
#include <stdlib.h>


int maiorValor(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int numero, maior;
    int i;


    printf("Digite o 1 valor: ");
    scanf("%d", &maior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &numero);


        maior = maiorValor(maior, numero);
    }


    printf("\n%d é o maior\n", maior);

    return 0;
}
