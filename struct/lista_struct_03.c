#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

void Imprimir(struct Aluno a[5]){
    
    printf("---Resultado---");

    for(int i = 0; i < 5; i++) {
        printf("\nNome do aluno %d: %s", i+1, a[i].nome);
        printf("\nMatricula do aluno %d: %d", i+1, a[i].matricula);
        printf("\nCurso do aluno %d: %s",i+1, a[i].curso);
        printf("\n---------------");
    }

}

int main()
{
    struct Aluno aluno[5];
    int opcao;
    
    do {
    for(int i = 0; i < 5; i ++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", aluno[i].nome);
        
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);
        
        printf("Digite o curso do aluno %d: ", i+1);
        scanf("%s", aluno[i].curso);
        
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
