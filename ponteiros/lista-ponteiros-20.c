#include <stdio.h>

void LerNotas(float *n1, float *n2) {
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", n1);
    } while(*n1 < 0 || *n1 > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", n2);
    } while(*n2 < 0 || *n2 > 10);
}

void Calcular(float *n1, float *n2, float *simples, float *ponderada) {
    *simples = (*n1 + *n2) / 2;
    *ponderada = (*n1 + (*n2 * 2)) / 3;
}

int main() {
    float nota1, nota2, mediaSimples, mediaPonderada;

    LerNotas(&nota1, &nota2);

    Calcular(&nota1, &nota2, &mediaSimples, &mediaPonderada);

    printf("\nMedia simples: %.2f", mediaSimples);
    printf("\nMedia ponderada: %.2f", mediaPonderada);

    return 0;
}