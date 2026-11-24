#include <stdio.h>

#define DOBRO(x) x*2
#define DOBRO_CERTO(x) ((x) * 2)

int dobro(int x);

int main() {
    printf("Macro DOBRO(2+3): %d\n", DOBRO(2 + 3));
    printf("Funcao dobro(2+3): %d\n", dobro(2 + 3));

    // Por que deu diferente? A macro so troca o texto, entao DOBRO(2+3)
    // vira 2+3*2. A multiplicacao vem primeiro, entao fica 2+6 = 8.
    // Na funcao, o 2+3 e calculado antes de chamar (vira 5), e depois 5*2 = 10.

    // agora com os parenteses de protecao
    printf("Macro corrigida DOBRO_CERTO(2+3): %d\n", DOBRO_CERTO(2 + 3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
