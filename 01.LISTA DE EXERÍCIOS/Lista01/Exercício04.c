#include <stdio.h>
#include <math.h>

int main()
{
    float salario, vendas;

    printf("Insira o preço de suas vendas:  ");
    scanf("%f", &vendas);
    
    salario = vendas*0.15;

    printf("seu salario será de: %.2f", salario);

    return 0;
}
