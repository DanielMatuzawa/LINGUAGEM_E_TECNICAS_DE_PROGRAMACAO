#include <stdio.h>

int main() {
    int valor;
    int notas[] = {100, 50, 10, 5, 2, 1};
    int quantidade[6];
    int i;

    printf("========================================\n");
    printf("       TERMINAL INFINITY CASH\n");
    printf("========================================\n");

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    for (i = 0; i < 6; i++) {
        quantidade[i] = valor / notas[i];
        valor = valor % notas[i];
    }

    printf("\nNotas entregues:\n");

    for (i = 0; i < 6; i++) {
        if (quantidade[i] > 0) {
            printf("R$ %d: %d nota(s)\n",
                   notas[i], quantidade[i]);
        }
    }

    return 0;
}
