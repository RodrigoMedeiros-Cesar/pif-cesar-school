#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int opcao;
    float x, y;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite o primeiro valor: ");
    scanf("%f", &x);
    printf("Digite o segundo valor: ");
    scanf("%f", &y);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(x, y));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(x, y));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(x, y));
            break;
        case 4:
            /* valida a divisao por zero antes de chamar a funcao */
            if (y == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                printf("Resultado: %.2f\n", divide(x, y));
            }
            break;
    }
    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
