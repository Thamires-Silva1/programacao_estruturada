#include <stdio.h>
void Ordena(int *p1, int *p2, int *p3, int *resultado) {
    int aux;

    if(*p1 > *p2) {
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }

    if(*p1 > *p3) {
        aux = *p1;
        *p1 = *p3;
        *p3 = aux;
    }

    if(*p2 > *p3) {
        aux = *p2;
        *p2 = *p3;
        *p3 = aux;
    }

    if(*p1 == *p2 && *p2 == *p3) {
        *resultado = 1;
    } else {
        *resultado = 0;
    }
}

int main()
{
    int inteiro1, inteiro2, inteiro3, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &inteiro1);

    printf("Digite o segundo numero: ");
    scanf("%d", &inteiro2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &inteiro3);

    Ordena(&inteiro1, &inteiro2, &inteiro3, &resultado);

    printf("\nPrimeira variavel: %d", inteiro1);
    printf("\nSegunda variavel: %d", inteiro2);
    printf("\nTerceira variavel: %d", inteiro3);

    printf("\nResultado: %d", resultado);

    return 0;
}