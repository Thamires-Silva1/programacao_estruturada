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
        printf("Dobro do numero %d: %d\n", i+1, *(p+i)*2);
    }
    return 0;
}