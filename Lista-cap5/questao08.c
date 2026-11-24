#include <stdio.h>

float celsius(float fahr);

int main() {
    float f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperatura em Celsius: %.2f\n", celsius(f));
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
