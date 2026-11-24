#include <stdio.h>

int maior(int a, int b);

int main() {
    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("O maior e: %d\n", maior(x, y));
    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
