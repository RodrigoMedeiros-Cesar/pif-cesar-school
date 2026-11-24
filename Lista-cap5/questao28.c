#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, pago, subtotal, total;
    int quantidade, pagamento;

    printf("Preco unitario: ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 - A vista, 2 - A prazo): ");
    scanf("%d", &pagamento);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, pagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor insuficiente! Faltam R$ %.2f\n", total - pago);
    } else {
        printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
    }
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

/* opcaoPagamento: 1 = a vista (10% de desconto), qualquer outro = sem desconto */
float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
