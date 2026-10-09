#include <stdio.h>

struct Data {
    int dia, mes, ano;
};

struct Funcionario {
  char nome[30], sexo, cpf[15], cargo[30];
  int idade, codSetor;
  struct Data nascimento;
  float salario;
};

void Imprimir(struct Funcionario funcionario) {
    printf("---Resultado---");
    printf("\nNome: %s", funcionario.nome);
    printf("\nIdade: %d", funcionario.idade);
    printf("\nSexo: %c", funcionario.sexo);
    printf("\nData de Nascimento: %02d/%02d/%d",funcionario.nascimento.dia, funcionario.nascimento.mes, funcionario.nascimento.ano);
    printf("\nCodigo do Setor: %d", funcionario.codSetor);
    printf("\nCargo: %s", funcionario.cargo);
    printf("\nSalario: R$ %.2f", funcionario.salario);
};
int main()
{
    struct Funcionario funcionario;
    int opcao;
    
    do {
    printf("Digite o nome: ");
    scanf("%s", funcionario.nome);
    
    printf("\nDigite a idade: ");
    scanf("%d", &funcionario.idade);
    
    do {
    printf("\nDigite o sexo(M/F): ");
    scanf(" %c", &funcionario.sexo);
    
    if(funcionario.sexo != 'M' && funcionario.sexo != 'F' && funcionario.sexo != 'm' && funcionario.sexo != 'f') {
        printf("Sexo invalido. Digite novamente.");
    }
    } while (funcionario.sexo != 'M' && funcionario.sexo != 'F' && funcionario.sexo != 'm' && funcionario.sexo != 'f');
    
    printf("\nDigite a data de nascimento(D/M/A separado por espacos): ");
    scanf("%d %d %d", &funcionario.nascimento.dia, &funcionario.nascimento.mes, &funcionario.nascimento.ano);
    
    do {
    printf("\nDigite o codigo do setor (0-99): ");
    scanf("%d", &funcionario.codSetor);
    
        if (funcionario.codSetor < 0 || funcionario.codSetor > 99) {
        printf("\nCodigo invalido. Digite novamente.");
        }    
    } while (funcionario.codSetor < 0 || funcionario.codSetor > 99);
    
    printf("\nDigite o cargo ocupado: ");
    scanf("%s", funcionario.cargo);
    
    printf("\nDigite o salario: ");
    scanf("%f", &funcionario.salario);
    
    printf("\n");
    
    Imprimir(funcionario);
    
    printf("\n");
    printf("\n---Escolha a acao---\n");
    printf("1 - Preencher dados novamente.\n");
    printf("2- Encerrar o programa.\n");
    scanf("%d", &opcao);
    
    } while (opcao == 1);
    return 0;
}
