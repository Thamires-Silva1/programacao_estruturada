#include <stdio.h>

int main()
{
    float vet[10];
    
    for(int i = 0; i < 10; i++) {
        printf("Endereco da posicao %d: %p\n", i+1, &vet[i]);
    }
    
    return 0;
}