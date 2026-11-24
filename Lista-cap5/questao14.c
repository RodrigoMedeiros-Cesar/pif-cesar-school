#include <stdio.h>

int somaDigitos(int n);

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    resultado = somaDigitos(numero);
    printf("A soma dos digitos de %d e %d\n", numero, resultado);

    return 0;
}

int somaDigitos(int n) {
    // caso base: quando o numero chega em 0 nao tem mais digito para somar
    if (n == 0) {
        return 0;
    }

    // passo recursivo: pego o ultimo digito (n % 10) e somo com
    // a soma dos digitos do resto do numero (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}
