#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,soma,produtorio,media;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &a);
    printf("\nDigite o segundo número: ");
    scanf("%f", &b);
    printf("\nDigite o terceiro número: ");
    scanf("%f", &c);
    printf("\nDigite o quarto número: ");
    scanf("%f", &d);

    soma = a+b+c+d;
    media = (a+b+c+d)/4;
    produtorio = a*b*c*d;

    printf("a soma é igual a %.2f, a media a %.2f e o produtorio é: %.2f", soma, media, produtorio);
    return 0;
}
