#include <stdio.h>
#include <math.h>

int main()
{
    int n, bit2, bit4, bit8, bit16, bit32, bit64;

    printf("Insira um número que seja maior igual a 64: ");
    scanf("%d", &n);

    bit64 = n % 2;
    n = n / 2;

    bit32 = n % 2;
    n = n / 2;

    bit16 = n % 2;
    n = n / 2;

    bit8 = n % 2;
    n = n / 2;

    bit4 = n % 2;
    n = n / 2;

    bit2 = n % 2;
    n = n / 2;

    printf("%d%d%d%d%d%d%d\n", n, bit2, bit4, bit8, bit16, bit32, bit64);

    return 0;
}
