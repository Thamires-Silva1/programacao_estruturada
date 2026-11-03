#include <stdio.h>

    struct Area {
        int comprimento;
        int largura;
        int area;
    };

    void Calculo(struct Area *a){
        (*a).area = (*a).comprimento * (*a).largura;
    }
int main () {
    struct Area terrenos[2];
    int total = 0;
    for (int i = 0; i < 2; i++){
        printf("Terreno %d\n", i+1);

        printf("Comprimento: ");
        scanf("%d", &terrenos[i].comprimento);

        printf("\nLargura: ");
        scanf("%d", &terrenos[i].largura);

        Calculo(&terrenos[i]);

        total = total + terrenos[i].area;
    }
        printf("O valor total das areas eh de: %d", total);
    return 0;
}