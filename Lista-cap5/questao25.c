#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int a, b;

    printf("Digite o primeiro numero positivo: ");
    scanf("%d", &a);
    printf("Digite o segundo numero positivo: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Os numeros precisam ser positivos\n");
        return 0;
    }

    printf("MDC de %d e %d = %d\n", a, b, mdc(a, b));
    simplifica(a, b);

    return 0;
}

// algoritmo de Euclides
int mdc(int a, int b) {
    // caso base: quando b chega em 0, o mdc e o a
    if (b == 0) {
        return a;
    }
    // passo recursivo: mdc(a, b) = mdc(b, resto de a por b)
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}
