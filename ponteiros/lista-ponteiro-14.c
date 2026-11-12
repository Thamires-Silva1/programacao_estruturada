#include <stdio.h>

void Preenche(int *p, int valor) {
    for(int i = 0; i < 5; i++) {
        *(p+i) = valor;
    }
}

int main() {
    int vet[5], valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    Preenche(vet, valor);

    for(int i = 0; i < 5; i++) {
        printf("Posicao %d: %d\n", i+1, *(vet+i));
    }

    return 0;
}
