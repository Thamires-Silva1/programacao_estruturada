#include <stdio.h>

int main() {
    int numero = 10;
    float real = 5.5;
    char letra = 'A';

    int *p1;
    float *p2;
    char *p3;

    p1 = &numero;
    p2 = &real;
    p3 = &letra;

    printf("Antes:\n");
    printf("Inteiro: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", letra);

    *p1 = 20;
    *p2 = 8.5;
    *p3 = 'B';

    printf("\nDepois:\n");
    printf("Inteiro: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", letra);

    return 0;
}