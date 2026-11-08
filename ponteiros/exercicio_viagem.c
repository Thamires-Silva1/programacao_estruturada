#include <stdio.h>

struct caminho {
    int distancia;
    char inicio[50];
    char fim[50];
    int ordem;
};

void Solicita(struct caminho *viagem, int quantidade) {
    for(int i = 0; i < quantidade; i++) {
        printf("\nTrecho %d\n", i + 1);

        printf("Cidade inicial: ");
        scanf(" %49[^\n]", viagem[i].inicio);

        printf("Cidade final: ");
        scanf(" %49[^\n]", viagem[i].fim);

        printf("Distancia em Km: ");
        scanf("%d", &viagem[i].distancia);

        printf("Ordem do trecho: ");
        scanf("%d", &viagem[i].ordem);
    }
}

void Calcula(struct caminho *viagem, int quantidade) {
    int total = 0;

    for(int i = 0; i < quantidade; i++) {
        total = total + viagem[i].distancia;
    }

    printf("\nDistancia total: %d Km\n", total);

    printf("\nOrdem da viagem:\n");

    for(int ordem = 1; ordem <= quantidade; ordem++) {
        for(int i = 0; i < quantidade; i++) {
            if(viagem[i].ordem == ordem) {
                printf("%d - %s ate %s (%d Km)\n", ordem, viagem[i].inicio, viagem[i].fim, viagem[i].distancia);
            }
        }
    }
}

int main() {
    struct caminho viagem[10];
    int quantidade;

    printf("Quantos trechos deseja cadastrar (1-6)? ");
    scanf("%d", &quantidade);

    if(quantidade < 1 || quantidade > 6) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    Solicita(viagem, quantidade);
    Calcula(viagem, quantidade);

    return 0;
}