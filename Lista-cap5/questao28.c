#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, subtotal, total, pago, troco;
    int quantidade, pagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 - a vista, 2 - a prazo): ");
    scanf("%d", &pagamento);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, pagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor pago e menor que o total\n");
    } else {
        troco = calculaTroco(total, pago);
        printf("Troco: R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

// 10% de desconto se for a vista (opcao 1)
float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor - valor * 0.10;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
