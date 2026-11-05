#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float valor_total, valor_final, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor_total);

    printf("Digite a opção de pagamento (1 = À Vista, 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valor_final = valor_total * 0.90;
        comissao = valor_final * 0.05;
        printf("\nValor final a pagar (à vista com 10%% de desconto): R$ %.2f\n", valor_final);
        printf("Comissão do vendedor (5%% sobre o valor com desconto): R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        float valor_parcela = valor_total / 3.0;
        comissao = valor_total * 0.05;
        printf("\nValor de cada parcela (3x sem juros): R$ %.2f\n", valor_parcela);
        printf("Valor total parcelado: R$ %.2f\n", valor_total);
        printf("Comissão do vendedor (5%% sobre o valor total): R$ %.2f\n", comissao);
    } else {
        printf("\nOpção de pagamento inválida!\n");
    }

    return 0;
}
