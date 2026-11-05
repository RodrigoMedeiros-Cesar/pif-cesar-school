#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float distancia, litros, consumo;

    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (litros > 0) {
        consumo = distancia / litros;
        printf("Consumo: %.2f km/l\n", consumo);

        if (consumo < 8.0) {
            printf("Venda o carro!\n");
        } else if (consumo >= 8.0 && consumo <= 14.0) {
            printf("Econômico!\n");
        } else {
            printf("Super econômico!\n");
        }
    } else {
        printf("A quantidade de litros deve ser maior que zero.\n");
    }

    return 0;
}
