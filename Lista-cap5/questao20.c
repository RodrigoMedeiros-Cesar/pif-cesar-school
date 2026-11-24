#include <stdio.h>

int ehPrimo(int n);

int main() {
    int n, i;

    printf("Digite um inteiro: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    printf("Primos de 1 ate 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
