#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float temp_entrada, temp_convertida;

    printf("Menu de Conversão de Temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opção (1-4): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp_entrada);
            temp_convertida = temp_entrada * 1.8 + 32;
            printf("Temperatura em Fahrenheit: %.2f\n", temp_convertida);
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp_entrada);
            temp_convertida = temp_entrada + 273.15;
            printf("Temperatura em Kelvin: %.2f\n", temp_convertida);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp_entrada);
            temp_convertida = (temp_entrada - 32) / 1.8;
            printf("Temperatura em Celsius: %.2f\n", temp_convertida);
            break;
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temp_entrada);
            temp_convertida = temp_entrada - 273.15;
            printf("Temperatura em Celsius: %.2f\n", temp_convertida);
            break;
        default:
            printf("Erro: Opção inválida!\n");
            break;
    }

    return 0;
}
