#include <stdio.h>

void Maior(int *p, int n) {
    *(p+n) = *p;
    *(p+n+1) = 0;

    for(int i = 0; i < n; i++) {
        if(*(p+i) > *(p+n)) {
            *(p+n) = *(p+i);
        }
    }

    for(int i = 0; i < n; i++) {
        if(*(p+i) == *(p+n)) {
            *(p+n+1) = *(p+n+1) + 1;
        }
    }
}

int main() {
    int n;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Quantidade invalida.");
        return 0;
    }

    int vet[n+2];

    for(int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", vet+i);
    }

    Maior(vet, n);

    printf("\nMaior numero: %d", *(vet+n));
    printf("\nQuantidade de vezes: %d", *(vet+n+1));

    return 0;
}
