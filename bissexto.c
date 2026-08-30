#include <stdio.h>
int main() {
    int ano;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if(ano < 0) {
        printf("Ano Inválido!\n");
        return 0;
    } else {
        printf("Ano Válido!\n");

    }

    if((ano % 2) == 0) {
        printf("Esse ano é Par!\n");

    } else if((ano % 2) == 1) {
        printf("Esse ano é ímpar!\n");

    }

    if( ((ano & 3) == 0) && (ano % 100 != 0) || (ano % 400 == 0) ) {
            printf("Ano Bissexto!\n");

    } else {
            printf("Ano não Bissexto!\n");
    }
    return 0;

}
