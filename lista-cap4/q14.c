#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float nota;
    int faltas;

    printf("Digite a nota (0.0 a 10.0): ");
    scanf("%f", &nota);

    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);

    printf("Conceito: ");

    if (nota >= 9.0 && nota <= 10.0) {
        if (faltas <= 20) {
            printf("A\n");
        } else {
            printf("B\n");
        }
    } else if (nota >= 7.5 && nota < 9.0) {
        if (faltas <= 20) {
            printf("B\n");
        } else {
            printf("C\n");
        }
    } else if (nota >= 5.0 && nota < 7.5) {
        if (faltas <= 20) {
            printf("C\n");
        } else {
            printf("D\n");
        }
    } else if (nota >= 4.0 && nota < 5.0) {
        if (faltas <= 20) {
            printf("D\n");
        } else {
            printf("E\n");
        }
    } else if (nota >= 0.0 && nota < 4.0) {
        printf("E\n");
    } else {
        printf("Nota inválida!\n");
    }

    return 0;
}
