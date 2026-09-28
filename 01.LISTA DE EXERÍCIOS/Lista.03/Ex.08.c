#include <stdio.h>

double calcularIRPF(double salarioBase) {
    double imposto;

    if (salarioBase <= 2259.20) {
        imposto = 0.0;
    }
    else if (salarioBase <= 2826.65) {
        imposto = (salarioBase * 0.075) - 169.44;
    }
    else if (salarioBase <= 3751.05) {
        imposto = (salarioBase * 0.15) - 381.44;
    }
    else if (salarioBase <= 4664.68) {
        imposto = (salarioBase * 0.225) - 662.77;
    }
    else {
        imposto = (salarioBase * 0.275) - 896.00;
    }
    if (imposto < 0) {
        imposto = 0.0;
    }

    return imposto;
}

int main() {
    double salarioBase;
    double imposto;

    printf("========================================\n");
    printf("          CALCULO DO IRPF\n");
    printf("========================================\n");

    printf("Digite o salario-base: R$ ");
    scanf("%lf", &salarioBase);

    imposto = calcularIRPF(salarioBase);

    printf("\nSalario-base: R$ %.2f\n", salarioBase);
    printf("Desconto do IRPF: R$ %.2f\n", imposto);

    return 0;
}
