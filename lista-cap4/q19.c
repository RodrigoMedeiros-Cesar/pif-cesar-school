#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B: ");
    scanf("%f", &b);

    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("Os lados formam um triângulo válido.\nClassificação: ");
        if (a == b && b == c) {
            printf("Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Isósceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    return 0;
}
