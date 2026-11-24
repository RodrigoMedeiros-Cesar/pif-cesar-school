#include <stdio.h>

#define DOBRO(x) x*2
#define DOBRO_OK(x) ((x) * 2)

int dobro(int x);

int main() {
    printf("Macro DOBRO(2+3)    = %d\n", DOBRO(2 + 3));
    printf("Funcao dobro(2+3)   = %d\n", dobro(2 + 3));

    /* Por que diferem: a macro faz substituicao TEXTUAL, entao DOBRO(2+3)
     * vira 2+3*2. Como * tem precedencia sobre +, o resultado e 2+6 = 8.
     * Na funcao, o argumento 2+3 e avaliado ANTES da chamada (vale 5),
     * e a funcao devolve 5*2 = 10. */

    /* Macro corrigida com parenteses de protecao: ((x) * 2) */
    printf("Macro DOBRO_OK(2+3) = %d\n", DOBRO_OK(2 + 3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}
