#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido, digite um valor positivo.\n");
        return 0;
    }

    printf("--- Versao regressiva ---\n");
    contagem(n);

    printf("--- Versao crescente ---\n");
    contagemCrescente(n);
    return 0;
}

/* Versao 1: imprime de n ate 1 e, ao final, "Fogo!" */
void contagem(int n) {
    if (n == 0) {          /* caso base */
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);     /* imprime ANTES da chamada recursiva */
    contagem(n - 1);
}

/* Versao 2: imprime de 1 ate n.
 * O que muda: o printf passa a ficar DEPOIS da chamada recursiva.
 * Assim, as chamadas vao empilhando ate n chegar a 0 e os valores so sao
 * impressos na fase de desempilhamento, ou seja, na ordem inversa (1, 2, ..., n).
 * Na versao 1, o printf vem antes da chamada, entao imprime na ida (n, n-1, ..., 1). */
void contagemCrescente(int n) {
    if (n == 0) {          /* caso base */
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);     /* imprime DEPOIS da chamada recursiva */
}
