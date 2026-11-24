#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("O expoente nao pode ser negativo\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
    }

    return 0;
}

long potencia(int base, int expoente) {
    // caso base: qualquer numero elevado a 0 e igual a 1
    if (expoente == 0) {
        return 1;
    }

    // passo recursivo: base^expoente = base * base^(expoente - 1)
    return base * potencia(base, expoente - 1);
}
