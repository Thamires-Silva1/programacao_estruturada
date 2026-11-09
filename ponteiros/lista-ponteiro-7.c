#include <stdio.h>
void Troca(int *p1, int *p2){
    *p1 = (*p1)+(*p2);
}
int main() {
    int A = 5, B = 2;
    
    printf("Antes da troca:");
    printf("\nA: %d", A);
    printf("\nB: %d", B);
    
    Troca(&A, &B);
    
    printf("\nDepois da troca:");
    printf("\nA: %d", A);
    printf("\nB: %d", B);
    return 0;
}