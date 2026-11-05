#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int valor_pagar, valor_entregue, troco;
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, resto;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &valor_pagar);

    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &valor_entregue);

    if (valor_entregue < valor_pagar) {
        printf("Erro: Valor entregue insuficiente!\n");
    } else {
        troco = valor_entregue - valor_pagar;
        printf("Troco total: R$ %d\n", troco);

        notas_100 = troco / 100;
        resto = troco % 100;

        notas_50 = resto / 50;
        resto = resto % 50;

        notas_20 = resto / 20;
        resto = resto % 20;

        notas_10 = resto / 10;
        resto = resto % 10;

        notas_5 = resto / 5;
        resto = resto % 5;

        notas_2 = resto / 2;
        resto = resto % 2;

        printf("Notas de R$ 100: %d\n", notas_100);
        printf("Notas de R$ 50: %d\n", notas_50);
        printf("Notas de R$ 20: %d\n", notas_20);
        printf("Notas de R$ 10: %d\n", notas_10);
        printf("Notas de R$ 5: %d\n", notas_5);
        printf("Notas de R$ 2: %d\n", notas_2);

        if (resto > 0) {
            printf("Moedas/Valor restante de R$ %d não cobertos por cédulas.\n", resto);
        }
    }

    return 0;
}
