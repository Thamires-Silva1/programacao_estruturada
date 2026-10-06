#include <stdio.h>

struct Pessoa {
    char nome[50];
    char endereco[100];
    int idade;
};

void Imprimir(struct Pessoa p){
    printf("---Resultado---");
    printf("\nNome: %s", p.nome);
    printf("\nEndereco: %s", p.endereco);
    printf("\nIdade: %d", p.idade);
}

int main()
{
    struct Pessoa pessoa;
    int opcao;
    
    do {
    printf("Digite o nome: ");
    scanf("%s", pessoa.nome);
    
    printf("\nObs: Nao utilize espaco, no lugar, use underline (_).");
    printf("\nDigite o endereco: ");
    scanf("%s", pessoa.endereco);
    
    printf("\nDigite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("\n");
    
    Imprimir(pessoa);
    
    printf("\n");
    printf("\n---Escolha a acao---\n");
    printf("1 - Preencher dados novamente.\n");
    printf("2 - Encerrar o programa.\n");
    scanf("%d", &opcao);
    
    } while (opcao == 1);

    return 0;
}
