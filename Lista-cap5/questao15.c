#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = mediaPonderada(nota1, nota2, nota3);
    printf("Media ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

// pesos 2, 3 e 5 (soma dos pesos = 10)
float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10;
}

void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}
