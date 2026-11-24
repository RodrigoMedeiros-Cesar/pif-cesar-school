#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int x, y;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo inteiro: ");
    scanf("%d", &y);

    printf("Quadrado de %d = %d\n", x, SQR(x));
    printf("Quadrado de %d = %d\n", y, SQR(y));
    printf("Maior = %d\n", MAX(x, y));
    printf("Menor = %d\n", MIN(x, y));
    return 0;
}
