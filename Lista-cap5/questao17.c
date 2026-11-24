#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long it, rec;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido.\n");
        return 0;
    }

    it = fatorialIterativo(n);
    rec = fatorialRecursivo(n);

    printf("Fatorial iterativo de %d = %ld\n", n, it);
    printf("Fatorial recursivo de %d = %ld\n", n, rec);

    if (it == rec) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados sao diferentes.\n");
    }
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}
