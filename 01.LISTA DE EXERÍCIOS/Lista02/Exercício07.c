#include <stdio.h>
#include <math.h>
int main()
{
    float total, primeiro, segundo, terceiro;

    total = 780.000;
    primeiro = total*0.46;
    segundo = total*0.32;
    terceiro = total*0.22;

    printf("\nO premio de terceiro lugar é equivalente a %.2f\no de segundo lugar é %.2f\ne o primeiro lugar recebeu %.2f", terceiro, segundo, primeiro);

}
