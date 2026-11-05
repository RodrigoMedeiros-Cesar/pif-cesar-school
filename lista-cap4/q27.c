#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int horas;
    float total = 0.0;

    printf("Digite o número de horas inteiras de permanência: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: O número de horas deve ser maior que zero.\n");
        return 0;
    }

    if (horas <= 2) {
        total = horas * 2.0;
    } else if (horas <= 4) {
        total = (2 * 2.0) + ((horas - 2) * 2.50);
    } else {
        total = (2 * 2.0) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("\nTempo total: %d hora(s)\n", horas);
    printf("Valor final cobrado: R$ %.2f\n", total);

    return 0;
}
