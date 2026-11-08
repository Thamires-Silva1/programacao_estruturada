#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
    int livre;
};

void Preenche(struct Data *data) {
    for(int i = 0; i < 30; i++) {
        data[i].dia = i + 1;
        data[i].mes = data[0].mes;
        data[i].ano = data[0].ano;
        data[i].livre = 1;
    }
}

void Reserva(struct Data *data, int dia) {
    if(dia < 1 || dia > 30) {
        printf("Dia invalido!\n");
        return;
    }

    for(int i = dia - 1; i < 30; i++) {
        if(data[i].livre == 1) {
            data[i].livre = 0;
            printf("Dia %d reservado!\n", data[i].dia);
            return;
        }
    }

    printf("Nao tem mais dias livres!\n");
}

void Mostra(struct Data *data) {
    for(int i = 0; i < 30; i++) {
        printf("%d/%d/%d - ", data[i].dia, data[i].mes, data[i].ano);

        if(data[i].livre == 1) {
            printf("Livre\n");
        }
        else {
            printf("Ocupado\n");
        }
    }
}

int main() {
    struct Data data[30];
    int dia;

    printf("Informe algum mes do ano (1-12): ");
    scanf("%d", &data[0].mes);

    printf("Informe o ano: ");
    scanf("%d", &data[0].ano);

    Preenche(data);

    do {
        printf("\nDigite um dia para reservar (0 para sair): ");
        scanf("%d", &dia);

        if(dia != 0) {
            Reserva(data, dia);
        }

    } while(dia != 0);

    Mostra(data);

    return 0;
}