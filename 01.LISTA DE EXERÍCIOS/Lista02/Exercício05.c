#include <stdio.h>
#include <math.h>
int main()
{
    float ang, radianos,r;
    
    printf("Insira o ângulo a ser transformado: ");
    scanf("%f", &ang);

    r=3.14;
    radianos = ang*(r/180);

    printf("o ângulo %.2f equivale a aproximadamente %.2f radianos", ang, radianos);

}
