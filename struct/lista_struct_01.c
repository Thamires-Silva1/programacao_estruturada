#include <stdio.h>
#include <string.h>

struct Horario {
    int hora, minutos, segundos;
};

struct Data {
    int dia, mes, ano;
};

struct Compromisso {
    struct Data data;
    struct Horario horario;
    char texto[100];
};

int main() {
    
    struct Compromisso compromisso;

    compromisso.data.dia = 3;
    compromisso.data.mes = 10;
    compromisso.data.ano = 2026;

    compromisso.horario.hora = 14;
    compromisso.horario.minutos = 30;
    compromisso.horario.segundos = 0;

    strcpy(compromisso.texto, "Fazer trabalho de C");

    printf("Data: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);

    printf("Horario: %d:%d:%d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    printf("Compromisso: %s\n", compromisso.texto);

    compromisso.data.dia = 5;
    compromisso.horario.hora = 16;
    compromisso.horario.minutos = 15;
    strcpy(compromisso.texto, "Estudar Struct");

    printf("\nDepois da modificacao:\n");

    printf("Data: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);

    printf("Horario: %d:%d:%d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    printf("Compromisso: %s\n", compromisso.texto);

    return 0;
}