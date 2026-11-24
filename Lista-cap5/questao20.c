#include <stdio.h>

int ehPrimo(int n);

int main() {
    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero) == 1) {
        printf("%d e primo\n", numero);
    } else {
        printf("%d nao e primo\n", numero);
    }

    printf("Numeros primos de 1 ate 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

// testa se algum numero de 2 ate n-1 divide n. Se dividir, nao e primo
int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
