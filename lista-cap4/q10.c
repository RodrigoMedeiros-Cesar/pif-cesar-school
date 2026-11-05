#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número é PAR\n");
    } else {
        printf("O número é ÍMPAR\n");
    }

    if (numero > 0) {
        printf("O número é POSITIVO\n");
    } else if (numero < 0) {
        printf("O número é NEGATIVO\n");
    } else {
        printf("O número é ZERO\n");
    }

    return 0;
}
