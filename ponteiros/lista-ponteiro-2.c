#include <stdio.h>

int main()
{
    int inteiro1, inteiro2;
    
    int *p1, *p2;
    
    p1 = &inteiro1;
    p2 = &inteiro2;
    
    printf("Endereco 1: %p\n", p1);
    printf("Endereco 2: %p\n", p2);
    if(p1 > p2) {
        printf("Maior endereco: %p", p1);
    } else {
        printf("Maior endereco: %p", p2);
    }
    return 0;
}
