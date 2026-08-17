#include <stdio.h>
#include <math.h>
int main()
{
    int antecessor, sucessor, n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    antecessor = n-1;
    sucessor = n+1;

    printf("o número antecessor de %d é %d e seu sucessor é %d", n, antecessor, sucessor);

}
