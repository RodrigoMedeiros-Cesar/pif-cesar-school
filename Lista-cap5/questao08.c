#include <stdio.h>

float celsius(float fahr);

int main() {
    float fahrenheit, resultado;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    resultado = celsius(fahrenheit);
    printf("Em Celsius fica: %.2f\n", resultado);

    return 0;
}

// formula C = (F - 32) * 5 / 9
float celsius(float fahr) {
    return (fahr - 32) * 5 / 9;
}
