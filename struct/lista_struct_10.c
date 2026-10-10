#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Carta {
    char naipe[10];
    char valor[3];
};

void CriarBaralho(struct Carta baralho[52]) {
    char naipes[4][10] = {
        "Copas", "Ouros", "Espadas", "Paus"
    };

    char valores[13][3] = {
        "A", "2", "3", "4", "5", "6", "7",
        "8", "9", "10", "J", "Q", "K"
    };

    int i, j, k = 0, p;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            p = 0;

            while (naipes[i][p] != '\0') {
                baralho[k].naipe[p] = naipes[i][p];
                p++;
            }
            baralho[k].naipe[p] = '\0';

            p = 0;

            while (valores[j][p] != '\0') {
                baralho[k].valor[p] = valores[j][p];
                p++;
            }
            baralho[k].valor[p] = '\0';

            k++;
        }
    }
}

void Embaralhar(struct Carta baralho[52]) {
    struct Carta aux;
    int i, j;

    for (i = 0; i < 52; i++) {
        j = rand() % 52;

        aux = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = aux;
    }
}

void Imprimir(struct Carta jogador[5]) {
    for (int i = 0; i < 5; i++) {
        printf("\n%s de %s",
               jogador[i].valor,
               jogador[i].naipe);
    }
}

int main() {
    struct Carta baralho[52];
    struct Carta jogador1[5];
    struct Carta jogador2[5];
    int i, k = 0;

    srand(time(NULL));

    CriarBaralho(baralho);
    Embaralhar(baralho);

    for (i = 0; i < 5; i++) {
        jogador1[i] = baralho[k];
        k++;

        jogador2[i] = baralho[k];
        k++;
    }

    printf("\n--- Cartas do Jogador 1 ---\n");
    Imprimir(jogador1);

    printf("\n\n--- Cartas do Jogador 2 ---\n");
    Imprimir(jogador2);

    printf("\n");

    return 0;
}