#include <stdio.h>
#include <stdlib.h>

int main() {
    double numero;

    printf("\n--- EXERCICIO 2 ---\n");
    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    if (numero > 0) {
        printf("Notacao cientifica: %e\n", numero);
    } else {
        printf("Digite um numero maior que zero.\n");
    }

    return 0;
}
