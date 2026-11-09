
#include <stdio.h>

int main() {
    int vetor[100];
    int i, j;
    int encontrou = 0;

    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {

            if (vetor[j] == vetor[i] + 1) {
                printf("%d e %d\n", vetor[i], vetor[j]);
                encontrou = 1;
            }

        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero consecutivo encontrado.\n");
    }

    return 0;
}
