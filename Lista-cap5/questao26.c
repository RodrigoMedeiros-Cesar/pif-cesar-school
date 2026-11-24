#include <stdio.h>

long fibonacci(int n);

int main() {
    int qtd, i;

    printf("Quantos termos da sequencia deseja ver? ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Digite um valor positivo.\n");
        return 0;
    }

    for (i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

/* Caso base: fibonacci(0) = 0 e fibonacci(1) = 1.
 * Passo recursivo: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2).
 *
 * Por que e lenta para n grande: cada chamada gera outras duas, e os mesmos
 * subproblemas sao recalculados muitas vezes (ex.: fibonacci(3) e calculado
 * varias vezes ao calcular fibonacci(6)). O numero de chamadas cresce de forma
 * exponencial, o que torna a versao recursiva muito lenta para valores grandes. */
long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
