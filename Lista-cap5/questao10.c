#include <stdio.h>

#define PI 3.14

float area(float r);

int main() {
    float raio, resultado;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    resultado = area(raio);
    printf("A area da esfera e: %.2f\n", resultado);

    return 0;
}

// area da esfera = 4 * PI * r * r
float area(float r) {
    return 4 * PI * r * r;
}
