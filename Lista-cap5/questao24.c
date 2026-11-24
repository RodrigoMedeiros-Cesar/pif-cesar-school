#include <stdio.h>

/* Para ativar a depuracao, descomente a linha abaixo
 * (ou compile com: gcc -DDEBUG questao24.c -o questao24) */
/* #define DEBUG */

int somaAteN(int n);

int main() {
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;
    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

/* Diferenca de comportamento:
 * - SEM #define DEBUG: o pre-processador descarta o printf de depuracao.
 *   O programa imprime apenas o resultado final.
 * - COM #define DEBUG: o printf e incluido no codigo compilado, e o programa
 *   mostra a soma parcial a cada iteracao do laco, alem do resultado final.
 * A decisao e tomada no pre-processamento, antes da compilacao. */
