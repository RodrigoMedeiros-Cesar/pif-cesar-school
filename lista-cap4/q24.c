#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a, b, c;

    printf("Digite o primeiro ângulo: ");
    scanf("%d", &a);

    printf("Digite o segundo ângulo: ");
    scanf("%d", &b);

    printf("Digite o terceiro ângulo: ");
    scanf("%d", &c);

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        printf("Os ângulos formam um triângulo válido.\nClassificação: ");
        if (a == 90 || b == 90 || c == 90) {
            printf("Retângulo\n");
        } else if (a > 90 || b > 90 || c > 90) {
            printf("Obtusângulo\n");
        } else {
            printf("Acutângulo\n");
        }
    } else {
        printf("Erro: Os ângulos fornecidos não formam um triângulo válido (a soma deve ser 180° e todos devem ser maiores que 0).\n");
    }

    return 0;
}
