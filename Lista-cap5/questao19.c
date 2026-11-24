#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero precisa ser positivo\n");
        return 0;
    }

    printf("Contagem regressiva:\n");
    contagem(n);

    printf("Contagem crescente:\n");
    contagemCrescente(n);

    return 0;
}

// primeira versao: de n ate 1 e depois "Fogo!"
void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
    } else {
        printf("%d\n", n);
        contagem(n - 1);
    }
}

// segunda versao: de 1 ate n
// o que muda: aqui o printf vem DEPOIS da chamada recursiva. Entao a funcao
// primeiro desce ate o 0 e so imprime na volta (desempilhando), por isso
// os numeros saem de 1 ate n. Na primeira versao o printf vem ANTES da
// chamada, entao imprime na ida e sai de n ate 1.
void contagemCrescente(int n) {
    if (n > 0) {
        contagemCrescente(n - 1);
        printf("%d\n", n);
    }
}
