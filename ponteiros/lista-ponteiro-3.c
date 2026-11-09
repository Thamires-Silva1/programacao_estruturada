#include <stdio.h>

int main()
{
    int inteiro1, inteiro2;
    
    int *p1, *p2;
    
    p1 = &inteiro1;
    p2 = &inteiro2;
    
    printf("Digite o conteudo do endereco 1: ");
    scanf("%d", &inteiro1);
    
    printf("\nDigite o conteudo do endereco 2: ");
    scanf("%d", &inteiro2);
    
    printf("\nEndereco 1: %p", p1);
    printf("\nEndereco 2: %p", p2);
    
    if(p1 > p2) {
        printf("\nConteudo do maior endereco: %d", *p1);
    } else {
        printf("\nConteudo do maior endereco: %d", *p2);
    }
    return 0;
}
