#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5, n6, n7, n8, n9;
    int dgv1, dgv2;
    int soma, resto1, resto2;

    printf("Insira seu CPF: ");
    scanf("%d %d %d . %d %d %d . %d %d %d - %d %d",
          &n1, &n2, &n3,
          &n4, &n5, &n6,
          &n7, &n8, &n9,
          &dgv1, &dgv2);

    printf("O CPF foi %d%d%d.%d%d%d.%d%d%d-%d%d",
           n1, n2, n3,
           n4, n5, n6,
           n7, n8, n9,
           dgv1, dgv2);


    soma = n1*10 + n2*9 + n3*8 +
           n4*7 + n5*6 + n6*5 +
           n7*4 + n8*3 + n9*2;

    resto1 = (soma * 10) % 11;

    if (resto1 == 10)
        resto1 = 0;

    printf("\nPrimeiro digito calculado: %d", resto1);

  
    soma = n1*11 + n2*10 + n3*9 +
           n4*8 + n5*7 + n6*6 +
           n7*5 + n8*4 + n9*3 +
           resto1*2;

    resto2 = (soma * 10) % 11;

    if (resto2 == 10)
        resto2 = 0;

    printf("\nSegundo digito calculado: %d", resto2);


    if (dgv1 == resto1 && dgv2 == resto2)
        printf("\nCPF valido!\n");
    else
        printf("\nCPF invalido!\n");

    return 0;
}
