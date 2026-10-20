
#include <stdio.h>
#include <stdlib.h>

int exercicio1() {
    int numero[10], i, j, temp;

    printf("\n--- EXERCICIO 1 ---\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nOrdem inversa:\n");

    for (i = 9; i >= 0; i--) {
        printf("%d ", numero[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (numero[i] < numero[j]) {
                temp = numero[i];
                numero[i] = numero[j];
                numero[j] = temp;
            }
        }
    }

    printf("\n\nOrdem do maior para o menor:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", numero[i]);
    }

    printf("\n");

    return 0;
}

int main() {
    exercicio1();

    return 0;
}
