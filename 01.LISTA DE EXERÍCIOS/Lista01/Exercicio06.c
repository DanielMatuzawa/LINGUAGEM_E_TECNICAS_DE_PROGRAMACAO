#include <stdio.h>
#include <math.h>

int main() {
    int total_dias, anos, resto_dias, meses, dias;

    
    printf("Digite a idade em dias: ");
    scanf("%d", &total_dias);

    
    anos = total_dias / 365;
    resto_dias = total_dias % 365;

    
    meses = resto_dias / 30;

    
    dias = resto_dias % 30;

   
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
