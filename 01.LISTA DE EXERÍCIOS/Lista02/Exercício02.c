#include <stdio.h>
#include <math.h>
int main()
{
    float km, ms;

    printf("Digite uma quilometragem: ");
    scanf("%f", &km);

    ms = km/3.6;

    printf("O valor em metros por segundos é de %.2f metros por segundos", ms);
}
