#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c , maiormtempo, maior;
    printf("Insira tres valores para identificar o maior: ");
    scanf("%d%d%d", &a,&b,&c);
    
    maiormtempo = ((a+b+c+abs(a-b-c))/3);
    
    printf("o maior numero entre |%d|%d|%d| = %d", a,b,c,maiormtempo);
    
    return 0;
}
