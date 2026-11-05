#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a (diferente de 0): ");
    scanf("%lf", &a);

    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("O coeficiente a deve ser diferente de 0.\n");
        return 0;
    }

    delta = (b * b) - (4.0 * a * c);
    printf("Delta: %.2f\n", delta);

    if (delta < 0.0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0.0) {
        x1 = -b / (2.0 * a);
        printf("Raiz única: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Duas raízes reais distintas:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
