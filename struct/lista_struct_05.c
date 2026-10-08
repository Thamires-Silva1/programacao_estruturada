#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula, CodDis;
    float n1, n2;
};

float Media(struct Aluno a) {
    return ((a.n1*1) + (a.n2*2)) / 3;
}

void Imprimir(struct Aluno a[10]){
    
    printf("---Resultado---");

    for(int i = 0; i < 10; i++) {
        printf("\nNome do aluno %d: %s", i+1, a[i].nome);
        printf("\nMedia: %.2f", Media(a[i]));
        printf("\n");
    }
}

int main()
{
    struct Aluno aluno[10];
    int opcao;
    
    do {
    for(int i = 0; i < 10; i ++){
        printf("Aluno %d", i+1);
        printf("\n---------------\n");
        
        printf("Digite o nome: ");
        scanf("%s", aluno[i].nome);
        
        printf("Digite a matricula: ");
        scanf("%d", &aluno[i].matricula);
        
        printf("Digite o codigo da disciplina: ");
        scanf("%d", &aluno[i].CodDis);
        
        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[i].n1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &aluno[i].n2);
        
        printf("\n");
    }
    
    Imprimir(aluno);
    
    printf("\n");
    printf("\n---Escolha a acao---\n");
    printf("1 - Preencher dados novamente.\n");
    printf("2- Encerrar o programa.\n");
    scanf("%d", &opcao);
    
    } while (opcao ==1);
    
    return 0;
}
