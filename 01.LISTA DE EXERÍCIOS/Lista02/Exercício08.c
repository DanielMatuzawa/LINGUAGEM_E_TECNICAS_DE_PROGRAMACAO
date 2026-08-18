#include <stdio.h>
#include <math.h>

int main()
{
    int segundos, minutos, horas;
    printf ("Digite os segundos para a operação: ");
    scanf ("%d", &segundos);
    minutos = segundos/60;
    horas = minutos/60;
    printf("%dhr:%dm:%dseg", horas, minutos, segundos);
    
    return 0;
}
