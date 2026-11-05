#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    if (numero >= 0.0) {
        double raiz = sqrt(numero);
        printf("Raiz quadrada: %.2f\n", raiz);
    } else {
        double quadrado = numero * numero;
        printf("Quadrado do numero: %.2f\n", quadrado);
    }

    return 0;
}
