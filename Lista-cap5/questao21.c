#include <stdio.h>

// uso parenteses em tudo para nao dar problema de precedencia
#define SQR(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Quadrado de %d: %d\n", num1, SQR(num1));
    printf("Quadrado de %d: %d\n", num2, SQR(num2));
    printf("Maior: %d\n", MAX(num1, num2));
    printf("Menor: %d\n", MIN(num1, num2));

    return 0;
}
