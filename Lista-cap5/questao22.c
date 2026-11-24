#include <stdio.h>
#include "areas.h"

int main() {
    float raio, base, alt;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &alt);

    printf("Area do circulo   = %.2f\n", A_CIRC(raio));
    printf("Area do retangulo = %.2f\n", A_RET(base, alt));

    /* triangulo com a mesma base e altura informadas */
    printf("Area do triangulo = %.2f\n", A_TRI(base, alt));
    return 0;
}
