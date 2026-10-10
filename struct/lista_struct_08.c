#include <stdio.h>

struct Pessoas {
    char nome[30];
    char endereco[30];
    char telefone[12];
};

void Ordenar(struct Pessoas a[5]) {
    int i, j, k;
    struct Pessoas aux;

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            k = 0;

            while (a[i].nome[k] == a[j].nome[k] && a[i].nome[k] != '\0') {
                k++;
            }

            if (a[i].nome[k] > a[j].nome[k]) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

void Imprimir(struct Pessoas a[5]) {
    int i;
        
        printf("--- Resultado ---");
        
    for (i = 0; i < 5; i++) {
        printf("\n--- Pessoa %d ---", i+1);
        printf("\nNome: %s", a[i].nome);
        printf("\nEndereco: %s", a[i].endereco);
        printf("\nTelefone: %s\n", a[i].telefone);
    }
}

int main() {
    struct Pessoas pessoas[5];
    int opcao;
    
    do {
    for (int i = 0; i < 5; i++) {

        printf("Pessoa %d", i+1);
        
        printf("\nDigite o nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Digite o endereco: ");
        scanf("%s", pessoas[i].endereco);

        printf("Digite o telefone: ");
        scanf("%s", pessoas[i].telefone);
        
        printf("\n");
    }

    Ordenar(pessoas);
    
    Imprimir(pessoas);
    
    printf("\n");
    printf("\n---Escolha a acao---\n");
    printf("1 - Preencher dados novamente.\n");
    printf("2- Encerrar o programa.\n");
    scanf("%d", &opcao);
    
    } while (opcao == 1);
    return 0;
}