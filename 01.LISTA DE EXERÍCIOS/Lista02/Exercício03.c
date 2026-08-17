#include <stdio.h>
#include <math.h>
int main()
{
    float dol;
    int real;

    printf("Digite o valor para transformar em dolares: ");
    scanf("%d", &real);
    
    dol = real/5.2;

    printf("seus reais são equivalentes a %.2f dólares", dol);

}
