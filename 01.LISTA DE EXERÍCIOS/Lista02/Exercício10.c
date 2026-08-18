#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c , maiormtempo, maior;
    printf("Insira tres valores para identificar o maior: ");
    scanf("%d%d%d", &a,&b,&c);
    
    maiormtempo = ((a+b+abs(a-b))/2);
    maior = ((maiormtempo+c+abs(maiormtempo-c))/2);
    
    printf("o maior numero entre |%d|%d|%d| = %d", a,b,c,maior);
    
    return 0;
}
