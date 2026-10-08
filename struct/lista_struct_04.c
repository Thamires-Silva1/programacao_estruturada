#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float n1, n2, n3;
};

float Media(struct Aluno a) {
    return (a.n1 + a.n2 + a.n3) / 3;
}

int status(struct Aluno a){
    if (Media(a) >= 6) {
        return 1;
    } else {
        return 0;
    }
}

int MaiorMedia(struct Aluno a[5]) {
    int aux = 0;

    for (int i = 0; i < 5; i++) {
    if (Media(a[i]) > Media(a[aux])) {
        aux = i;
        }
    }
    return aux;
}

int MenorMedia(struct Aluno a[5]) {
    int aux = 0;

    for (int i = 0; i < 5; i++) {
        if (Media(a[i]) < Media(a[aux])) {
        aux = i;
        }
    }
    return aux;
}

int Maiorn1(struct Aluno a[5]) {
    int aux = 0;
    
    for(int i = 0; i < 5; i++) {
        if(a[i].n1 > a[aux].n1) {
            aux = i;
        }
    }
    return aux;
}

void Imprimir(struct Aluno a[5]){
    
    printf("---Resultado---");

    for(int i = 0; i < 5; i++) {
        printf("\nNome do aluno %d: %s", i+1, a[i].nome);
        printf("\nMatricula do aluno %d: %d", i+1, a[i].matricula);
        
        if(status(a[i])) {
        printf("\nStatus: Aprovado!");
        } else {
            printf("\nStatus: Reprovado!");
        }
        printf("\n---------------");
    }
}

int main()
{
    struct Aluno aluno[5];
    int opcao;
    
    do {
    for(int i = 0; i < 5; i ++){
        printf("Aluno %d", i+1);
        printf("\n---------------\n");
        
        printf("Digite o nome: ");
        scanf("%s", aluno[i].nome);
        
        printf("Digite a matricula: ");
        scanf("%d", &aluno[i].matricula);
        
        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[i].n1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &aluno[i].n2);
        
        printf("Digite a terceira nota: ");
        scanf("%f", &aluno[i].n3);
        printf("\n");
    }
    
    Imprimir(aluno);
    
    int pn1 = Maiorn1(aluno);
    int pMaior = MaiorMedia(aluno);
    int pMenor = MenorMedia(aluno);
    
    printf("\nO aluno com a maior nota na primeira prova eh %s (%.2f)\n", aluno[pn1].nome, aluno[pn1].n1);
    printf("O aluno com a maior media eh %s (%.2f)\n", aluno[pMaior].nome, Media(aluno[pMaior]));
    printf("O aluno com a menor media eh %s (%.2f)\n", aluno[pMenor].nome, Media(aluno[pMenor]));
    
    printf("\n");
    printf("\n---Escolha a acao---\n");
    printf("1 - Preencher dados novamente.\n");
    printf("2- Encerrar o programa.\n");
    scanf("%d", &opcao);
    
    } while (opcao ==1);
    
    return 0;
}
