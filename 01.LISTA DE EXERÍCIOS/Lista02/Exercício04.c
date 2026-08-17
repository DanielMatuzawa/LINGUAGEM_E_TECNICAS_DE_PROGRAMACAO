#include <stdio.h>
#include <math.h>
int main()
{
    float C,Fh;
    
    printf("Insira a temperatura em graus: ");
    scanf("%f", &C);
    
    Fh = (C*1.8)+32;

    printf("os celsius %.2f equivalem a %.2f fahrenheit", C, Fh);

}
