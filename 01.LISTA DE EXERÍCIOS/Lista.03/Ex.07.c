#include <stdio.h>

double calcularINSS(double salarioBruto) {
    double inss;

    if (salarioBruto <= 1412.00) {
        inss = salarioBruto * 0.075;
    }
    else if (salarioBruto <= 2666.68) {
        inss = salarioBruto * 0.09;
    }
    else if (salarioBruto <= 4000.03) {
        inss = salarioBruto * 0.12;
    }
    else {

        inss = 4000.03 * 0.14;
    }

    return inss;
}

int main() {
    double salarioBruto;
    double descontoINSS;

    printf("========================================\n");
    printf("          CALCULO DO INSS\n");
    printf("========================================\n");

    printf("Digite o salario bruto: R$ ");
    scanf("%lf", &salarioBruto);

    descontoINSS = calcularINSS(salarioBruto);

    printf("\nSalario bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto do INSS: R$ %.2f\n", descontoINSS);

    return 0;
}
