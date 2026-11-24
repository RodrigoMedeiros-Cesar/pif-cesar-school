#include <stdio.h>

int soma(int a, int b);

int main() {
    int x, y;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &y);

    printf("Soma = %d\n", soma(x, y));
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
