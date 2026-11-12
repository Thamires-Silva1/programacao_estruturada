#include <stdio.h>

int main() {
    int vet[5] = {2, 4, 6, 8, 10};
    int *p = vet;

    for(int i = 0; i < 5; i++) {
        *(p+i) = *(p+i) + 1;
    }

    for(int i = 0; i < 5; i++) {
        printf("Posicao %d: %d\n", i+1, *(p+i));
    }

    return 0;
}
