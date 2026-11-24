#include <stdio.h>

void exibeMenu(void);

int main() {
    int opcao;

    exibeMenu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce escolheu: Cadastrar\n");
            break;
        case 2:
            printf("Voce escolheu: Listar\n");
            break;
        case 3:
            printf("Voce escolheu: Remover\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}

void exibeMenu(void) {
    printf("===== MENU =====\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
