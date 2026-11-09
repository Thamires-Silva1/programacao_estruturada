#include <stdio.h>
void Soma(int *p1, int *p2, int *soma) {
    *p1 = (*p1)+(*p1);
    *p2 = (*p2)+(*p2);
    *soma = (*p1) + (*p2);
}
int main() {
    int A, B, soma;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("\nDigite o valor de B: ");
    scanf("%d", &B);
    
    Soma(&A, &B, &soma);
    
    printf("\nDobro de A: %d", A);
    printf("\nDobro de B: %d", B);
    printf("\nSoma entre A e B: %d", soma);
    return 0;
}