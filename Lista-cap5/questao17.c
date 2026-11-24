#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int numero;
    long fat1, fat2;

    printf("Digite um numero inteiro (0 ou maior): ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido\n");
        return 0;
    }

    fat1 = fatorialIterativo(numero);
    fat2 = fatorialRecursivo(numero);

    printf("Fatorial iterativo: %ld\n", fat1);
    printf("Fatorial recursivo: %ld\n", fat2);

    if (fat1 == fat2) {
        printf("Os dois resultados sao iguais\n");
    } else {
        printf("Os resultados sao diferentes\n");
    }

    return 0;
}

// usando for
long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

// usando recursao
long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
