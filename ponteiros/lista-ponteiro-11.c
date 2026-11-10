#include <stdio.h>
int main()
{
    int vet[5];
    int *p = vet;
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", p+i);
    }
    for(int i = 0; i < 5; i++){
        if(*(p+i)%2 == 0) {
            printf("Endereco dos valores pares: %d: %p\n", i+1, (p+i));
        }
    }
    return 0;
}