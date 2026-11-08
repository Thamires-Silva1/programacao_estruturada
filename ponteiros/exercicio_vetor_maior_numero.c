#include <stdio.h>

    void Solicita(int *v){
        printf("Digite os números do vetor: ");
        for (int i = 0; i < 5; i++) {
            scanf("%d", &v[i]);
        }
    }
    void Recebe(int *v){
        printf("Os números escolhidos foram esses: ");
            for (int i = 0; i < 5; i++) {
                printf("%d ", v[i]);
            }
    }
    
    void Maior(int *v, int *maior) {
        int aux = v[0];
        for (int i = 0; i < 5; i++) {
            if(v[i] > aux) {
                aux = v[i];
            }
        }
        *maior = aux;
    }
int main() {
    int vet[5], maior;
    
    Solicita(vet);
    
    Recebe(vet);
    
    Maior(vet, &maior);
    
    printf("\nO maior número é: %d", maior);
    
    return 0;
}
