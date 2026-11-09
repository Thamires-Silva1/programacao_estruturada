#include <stdio.h>
    void Troca(int *p1, int *p2) {
        int aux;
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }
int main()
{
    int inteiro1, inteiro2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &inteiro1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d", &inteiro2);
    
    printf("\nAntes da troca:\n");
    printf("Inteiro 1: %d\n", inteiro1);
    printf("Inteiro 2: %d", inteiro2);
    
    Troca(&inteiro1, &inteiro2);
    
    printf("\n\nDepois da troca:\n");
    printf("Inteiro 1: %d\n", inteiro1);
    printf("Inteiro 2: %d\n", inteiro2);
    
    return 0;
}
