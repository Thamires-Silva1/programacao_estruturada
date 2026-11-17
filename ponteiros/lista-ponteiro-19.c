#include <stdio.h>

void MaiorMenor(int *v, int *min, int *max, int n) {
    *min = *v;
    *max = *v;

    for(int i = 0; i < n; i++) {
        if(*(v+i) < *min) {
            *min = *(v+i);
        }

        if(*(v+i) > *max) {
            *max = *(v+i);
        }
    }
}

int main() {
    int n, min, max;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Quantidade invalida.");
        return 0;
    }

    int vet[n];

    for(int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", vet+i);
    }

    MaiorMenor(vet, &min, &max, n);

    printf("\nMenor numero: %d", min);
    printf("\nMaior numero: %d", max);

    return 0;
}
