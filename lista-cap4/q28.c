#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int opcao;

    printf("Menu URA - Banco:\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para Consulta de Saldo...\n");
            break;
        case 2:
            printf("Direcionando para Emissão de Extrato...\n");
            break;
        case 3:
            printf("Direcionando para Realização de Transferência...\n");
            break;
        case 4:
            printf("Direcionando para Atendente...\n");
            break;
        default:
            printf("Erro: Opção Inválida!\n");
            break;
    }

    return 0;
}
