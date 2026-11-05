#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int ano;

    printf("Digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    // Regra: divisível por 400 OU (divisível por 4 E NÃO divisível por 100)
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}
