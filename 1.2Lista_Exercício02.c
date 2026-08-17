#include <stdio.h>

int main()
{
    double a;

    printf("Digite um numero: ");
    scanf("%lf", &a);

    printf("Em notação científica: %e\n", a);

    return 0;
}
