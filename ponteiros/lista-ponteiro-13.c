#include <stdio.h>

void Verifica(char *p1, char *p2) {
    int encontrou = 0;

    for(int i = 0; *(p1+i) != '\0'; i++) {
        int j = 0;

        while(*(p2+j) != '\0' && *(p1+i+j) == *(p2+j)) {
            j++;
        }

        if(*(p2+j) == '\0') {
            encontrou = 1;
            break;
        }
    }

    if(encontrou == 1) {
        printf("A segunda string esta dentro da primeira.");
    } else {
        printf("A segunda string nao esta dentro da primeira.");
    }
}

int main() {
    char palavra1[100], palavra2[100];

    printf("Digite a primeira string: ");
    scanf("%99s", palavra1);

    printf("Digite a segunda string: ");
    scanf("%99s", palavra2);

    Verifica(palavra1, palavra2);

    return 0;
}