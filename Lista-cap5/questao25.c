#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int a, b;

    printf("Digite o primeiro inteiro positivo: ");
    scanf("%d", &a);
    printf("Digite o segundo inteiro positivo: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Digite apenas inteiros positivos.\n");
        return 0;
    }

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);
    return 0;
}

/* Algoritmo de Euclides */
int mdc(int a, int b) {
    if (b == 0) {            /* caso base */
        return a;
    }
    return mdc(b, a % b);    /* passo recursivo */
}

void simplifica(int num, int den) {
    int d = mdc(num, den);
    printf("Fracao %d/%d simplificada: %d/%d\n", num, den, num / d, den / d);
}
