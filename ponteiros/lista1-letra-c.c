#include <stdio.h>

void comparar(int *v1, int *v2, int *v3, int *quantidade) {
    *quantidade = 0;
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <5; j++) {
            if (v1[i] == v2[j]) {
                v3[*quantidade] = v1[i];
                (*quantidade)++;
            }
        }
    }
}
int main()
{
    int vet1[5], vet2[5], vet3[5];
    int quantidade = 0;
    
    printf("Digite os 5 valores do vetor 1: ");
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &vet1[i]);
    }
    
    printf("\nDigite os 5 valores do vetor 2: ");
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &vet2[i]);
    }
    
    comparar(vet1, vet2, vet3, &quantidade);
    
    printf("\nNúmeros em comum: ");
    
    for(int i = 0; i < quantidade; i++){
        printf("%d ", vet3[i]);
    }
    return 0;
}
