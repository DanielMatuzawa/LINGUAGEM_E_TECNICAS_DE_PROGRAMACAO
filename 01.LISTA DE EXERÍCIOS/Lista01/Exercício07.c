#include <stdio.h>
#include <math.h>

int main() {
    double r, volume;
    const double pi = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%lf", &r);

    volume = (4.0 / 3.0) * pi * r * r * r;

    printf("Volume da esfera: %.2lf\n", volume);

    return 0;
}
