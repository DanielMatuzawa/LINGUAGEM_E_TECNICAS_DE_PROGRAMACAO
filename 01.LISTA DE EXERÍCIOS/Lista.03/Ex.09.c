#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double v0, angulo;
    double radianos;
    double x = 0.0;
    double y = 0.0;
    double vx, vy;
    double tempo = 0.0;

    double g = 9.8;
    double k = 0.5;
    double dt = 0.01;

    printf("========================================\n");
    printf("       OPERACAO ENIAC - TRAJETORIA\n");
    printf("========================================\n");

    printf("Digite a velocidade inicial (m/s): ");
    scanf("%lf", &v0);

    printf("Digite o angulo de lancamento (graus): ");
    scanf("%lf", &angulo);

    radianos = angulo * (PI / 180.0);
    vx = v0 * cos(radianos);
    vy = v0 * sin(radianos);

    while (1) {

        x = x + vx * dt;
        y = y + vy * dt;
        vx = vx - k * vx * dt;
        vy = vy + (-g - k * vy) * dt;
        tempo = tempo + dt;
        if (y <= 0 && tempo > dt) {
            break;
        }
    }

    printf("\n========================================\n");
    printf("             RESULTADO\n");
    printf("========================================\n");

    printf("Alcance horizontal: %.2f metros\n", x);
    printf("Tempo de voo: %.2f segundos\n", tempo);

    return 0;
}
