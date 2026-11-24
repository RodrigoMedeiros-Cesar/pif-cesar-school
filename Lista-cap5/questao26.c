#include <stdio.h>

long fibonacci(int n);

int main() {
    int quantidade, i;

    printf("Quantos termos voce quer ver? ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

// casos base: fibonacci(0) = 0 e fibonacci(1) = 1
// passo recursivo: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
//
// Fica lenta para n grande porque cada chamada cria mais duas chamadas e
// o mesmo valor e calculado varias vezes (ex: fibonacci(3) e refeito um monte
// de vezes quando calculo fibonacci(6)). O numero de chamadas cresce muito rapido.
long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
