#include <stdio.h>
void Recebe(int *p1, int *p2){
    int aux;
    if (*p1 < *p2) {
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }
}
int main()
{
    int inteiro1, inteiro2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &inteiro1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d", &inteiro2);
    
    Recebe(&inteiro1, &inteiro2);
    
    printf("Primeira variavel: %d\n", inteiro1);
    printf("Segunda variavel: %d", inteiro2);
    return 0;
}
