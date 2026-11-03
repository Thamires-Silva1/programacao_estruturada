#include <stdio.h>

    struct Area {
        int comprimento;
        int largura;
        int area;
    };

    void Trocar(int *A, int *B) {
        int aux;

        aux = *A;
        *A = *B;
        *B = aux;
    }
int main () {
    int a = 5, b = 8;

    printf("Numero antes da troca: a = %d; b = %d\n", a, b);
    Trocar(&a, &b);
    printf("Numero depois da troca: a = %d; b = %d", a, b);
    return 0;
}