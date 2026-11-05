#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double trab_lab, aval_sem, exame_final, media;

    printf("Digite a nota do Trabalho de Laboratório (peso 2): ");
    scanf("%lf", &trab_lab);

    printf("Digite a nota da Avaliação Semestral (peso 3): ");
    scanf("%lf", &aval_sem);

    printf("Digite a nota do Exame Final (peso 5): ");
    scanf("%lf", &exame_final);

    media = (trab_lab * 2.0 + aval_sem * 3.0 + exame_final * 5.0) / 10.0;

    printf("\nMédia Ponderada: %.2f\n", media);
    printf("Situação: ");

    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        printf("Em Recuperação\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
