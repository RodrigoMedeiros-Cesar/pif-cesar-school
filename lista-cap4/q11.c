#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a, b, c;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &c);

    printf("\nValores em ordem crescente:\n");

    if (a <= b && a <= c) {
        if (b <= c) {
            printf("%d, %d, %d\n", a, b, c);
        } else {
            printf("%d, %d, %d\n", a, c, b);
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            printf("%d, %d, %d\n", b, a, c);
        } else {
            printf("%d, %d, %d\n", b, c, a);
        }
    } else {
        if (a <= b) {
            printf("%d, %d, %d\n", c, a, b);
        } else {
            printf("%d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}
