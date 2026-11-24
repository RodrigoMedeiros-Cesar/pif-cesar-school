#include <stdio.h>

int soma(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);
    printf("A soma e: %d\n", resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}
