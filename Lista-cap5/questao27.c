#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    int opcao;
    float temp;

    printf("===== CONVERSOR DE TEMPERATURAS =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            printf("%.2f C = %.2f F\n", temp, celsiusParaFahrenheit(temp));
            break;
        case 2:
            printf("%.2f C = %.2f K\n", temp, celsiusParaKelvin(temp));
            break;
        case 3:
            printf("%.2f F = %.2f C\n", temp, fahrenheitParaCelsius(temp));
            break;
        case 4:
            printf("%.2f K = %.2f C\n", temp, kelvinParaCelsius(temp));
            break;
    }
    return 0;
}

float celsiusParaFahrenheit(float c) {
    return c * 9.0 / 5.0 + 32.0;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}
