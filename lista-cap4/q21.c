#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float salario_atual, aumento, novo_salario;
    int codigo_cargo;

    printf("Digite o salário atual: ");
    scanf("%f", &salario_atual);

    printf("Digite o código do cargo (1 = Técnico, 2 = Gerente, 3 = Demais Cargos): ");
    scanf("%d", &codigo_cargo);

    switch (codigo_cargo) {
        case 1:
            if (salario_atual <= 3000.0) {
                aumento = salario_atual * 0.15;
            } else {
                aumento = salario_atual * 0.10;
            }
            break;
        case 2:
            if (salario_atual <= 5000.0) {
                aumento = salario_atual * 0.10;
            } else {
                aumento = salario_atual * 0.05;
            }
            break;
        case 3:
            aumento = salario_atual * 0.08;
            break;
        default:
            printf("Código de cargo inválido!\n");
            return 0;
    }

    novo_salario = salario_atual + aumento;

    printf("\nValor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário reajustado: R$ %.2f\n", novo_salario);

    return 0;
}
