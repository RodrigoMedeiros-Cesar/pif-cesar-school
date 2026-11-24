#include <stdio.h>

int somaDigitos(int n);

int main() {
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido, digite um inteiro positivo.\n");
        return 0;
    }

    printf("Soma dos digitos de %d = %d\n", n, somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    /* Caso base: quando n e 0, nao ha mais digitos a somar */
    if (n == 0) {
        return 0;
    }
    /* Passo recursivo: ultimo digito (n % 10) + soma dos digitos do restante (n / 10) */
    return (n % 10) + somaDigitos(n / 10);
}
