#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float valor_produto, valor_final;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Digite o código do estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            valor_final = valor_produto * 1.07;
            printf("Preço final com imposto para MG: R$ %.2f\n", valor_final);
            break;
        case 2:
            valor_final = valor_produto * 1.12;
            printf("Preço final com imposto para SP: R$ %.2f\n", valor_final);
            break;
        case 3:
            valor_final = valor_produto * 1.15;
            printf("Preço final com imposto para RJ: R$ %.2f\n", valor_final);
            break;
        case 4:
            valor_final = valor_produto * 1.08;
            printf("Preço final com imposto para MS: R$ %.2f\n", valor_final);
            break;
        default:
            printf("Erro: Código de estado inválido!\n");
            break;
    }

    return 0;
}
