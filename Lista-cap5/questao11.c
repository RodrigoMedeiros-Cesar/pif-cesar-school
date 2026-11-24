#include <stdio.h>

int ehPar(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero) == 1) {
        printf("O numero %d e par\n", numero);
    } else {
        printf("O numero %d e impar\n", numero);
    }

    return 0;
}

// se o resto da divisao por 2 for 0, e par
int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
