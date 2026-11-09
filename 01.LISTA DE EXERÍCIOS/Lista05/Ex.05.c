
#include <stdio.h>


int verificarParidade(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}


int verificarPrimo(int numero) {
    int i;

    if (numero < 2) {
        return 0;
    }

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int vetor[100];
    int i;


    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("\n===== RESULTADOS =====\n");

    for (i = 0; i < 100; i++) {

        printf("\nNumero: %d\n", vetor[i]);

        if (verificarParidade(vetor[i])) {
            printf("Paridade: Par\n");
        } else {
            printf("Paridade: Impar\n");
        }

        if (verificarPrimo(vetor[i])) {
            printf("Primalidade: Primo\n");
        } else {
            printf("Primalidade: Nao primo\n");
        }
    }

    return 0;
}
