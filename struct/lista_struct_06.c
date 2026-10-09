#include <stdio.h>
#include <math.h>

struct Polar {
    float r, a;
};

struct Cartesiano {
  float x, y;  
};

struct Cartesiano Transformar(struct Polar polar){
    struct Cartesiano cartesiano;
     
    cartesiano.x = polar.r*cos(polar.a);
    cartesiano.y = polar.r*sin(polar.a);
    
    return cartesiano;
}

void Imprimir(struct Cartesiano cartesiano) {
    printf("\n---Resultado---");
    printf("\nCoordenadas no plano cartesiano:");
    printf("\nx: %.2f", cartesiano.x);
    printf("\ny: %.2f", cartesiano.y);
}

int main()
{
    struct Polar polar;
    struct Cartesiano cartesiano;
    int opcao;
    
    do {
    printf("Digite o valor do raio (r): ");
    scanf("%f", &polar.r);
    
    printf("\nDigite o valor do argumento (a): ");
    scanf("%f", &polar.a);
    
    cartesiano = Transformar(polar);
    
    Imprimir(cartesiano);
    
    printf("\n");
    printf("\n---Escolha a acao---\n");
    printf("1 - Preencher dados novamente.\n");
    printf("2- Encerrar o programa.\n");
    scanf("%d", &opcao);
    
    } while (opcao == 1);

    return 0;
}