#include <stdio.h>

struct Alunos {
  char nome[30];
  int matricula;
  float media;
};
int status(struct Alunos a){
    if(a.media >= 5.0) {
        return 1;
    } else {
        return 0;
    }
}
void Imprimir(struct Alunos a[10], int quantidade){
    for (int i = 0; i < quantidade; i++) {
        printf("\nNome: %s", a[i].nome);
        printf("\nMatricula: %d", a[i].matricula);
        printf("\nMedia final: %.2f\n", a[i].media);
    }
}
int main()
{
    struct Alunos alunos[10];
    struct Alunos reprovados[10];
    struct Alunos aprovados[10];
    int r, a, opcao;
    
    do {
        
    a = 0;
    r = 0;
    for (int i = 0; i < 10; i++){
        
    printf("Aluno %d", i+1);
    
    printf("\nDigite o nome: ");
    scanf("%s", alunos[i].nome);
    
    printf("\nDigite a matricula: ");
    scanf("%d", &alunos[i].matricula);
    
    printf("\nDigite a media final: ");
    scanf("%f", &alunos[i].media);
    }
    for (int i = 0; i < 10; i++) {
        if (status(alunos[i]) == 1) {
            aprovados[a] = alunos[i];
            a++;
        } else {
            reprovados[r] = alunos[i];
            r++;
        }
    }
    
    printf("\n--- APROVADOS ---\n");
    Imprimir(aprovados, a);

    printf("\n--- REPROVADOS ---\n");
    Imprimir(reprovados, r);
    
    printf("\n");
    printf("\n---Escolha a acao---\n");
    printf("1 - Preencher dados novamente.\n");
    printf("2- Encerrar o programa.\n");
    scanf("%d", &opcao);
    
    } while (opcao == 1);
    return 0;
}
