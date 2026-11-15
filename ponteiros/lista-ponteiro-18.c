#include <stdio.h>

int Soma(int *p1, int *p2, int *p3, int tam1, int tam2) {
    if(tam1 != tam2) {
        return 0;
    }

    for(int i = 0; i < tam1; i++) {
        *(p3+i) = *(p1+i) + *(p2+i);
    }

    return 1;
}

int main() {
    int tam1, tam2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    if(tam1 <= 0 || tam2 <= 0) {
        printf("Tamanho invalido.");
        return 0;
    }

    int vet1[tam1], vet2[tam2], vet3[tam1];

    for(int i = 0; i < tam1; i++) {
        printf("Digite o numero %d do primeiro vetor: ", i+1);
        scanf("%d", vet1+i);
    }

    for(int i = 0; i < tam2; i++) {
        printf("Digite o numero %d do segundo vetor: ", i+1);
        scanf("%d", vet2+i);
    }

    int resultado = Soma(vet1, vet2, vet3, tam1, tam2);

    if(resultado == 1) {
        for(int i = 0; i < tam1; i++) {
            printf("Soma da posicao %d: %d\n", i+1, *(vet3+i));
        }
    } else {
        printf("Os vetores possuem tamanhos diferentes.");
    }

    return 0;
}
