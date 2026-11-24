#include <stdio.h>

// tire as barras da linha de baixo para ligar o modo debug
// (ou compile com: gcc -DDEBUG questao24.c -o questao24)
// #define DEBUG

int somaAteN(int n);

int main() {
    int n, resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = somaAteN(n);
    printf("A soma de 1 ate %d e %d\n", n, resultado);

    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma = soma + i;

#ifdef DEBUG
        printf("DEBUG: i = %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

// Diferenca entre compilar com e sem DEBUG:
// - sem DEBUG: o printf do debug nem entra no programa, so aparece o resultado final.
// - com DEBUG: aparece a soma parcial em cada volta do for, e depois o resultado final.
