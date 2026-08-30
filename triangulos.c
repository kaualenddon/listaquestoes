#include <stdio.h>
int main() {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: \n");
    scanf("%d", &valor3);

    if (valor1 + valor2 > valor3 && valor1 + valor3 > valor2 && valor2 + valor3 > valor1) {
        printf("Os valores formam um triângulo!\n");
    } else {
            printf("Os valores não formam um triângulo.\n");
            return 0;
    }
    if (valor1 <= 0 || valor2 <= 0 || valor3 <= 0) {
            printf ("Os valores não formam um triângulo!\n");
            return 0;
    } else {
            printf ("Os valores formam um triângulos!\n");
    }
    if (((valor1 & 1) == 0) || ((valor2 & 1) == 0) || ((valor3 & 1) == 0)) {
        printf("Pelo menos um lado é par\n");
    }

    if ((valor1 == valor2) && (valor1 == valor3) && (valor2 == valor3)){
        printf("Triângulo Equilátero!\n");
    } else if ((valor1 != valor2) && (valor1 != valor3) && (valor2 != valor3)){
            printf("Triângulo Escaleno!\n");
    } else if ((valor1 == valor2) || (valor1 == valor3) || (valor2 == valor3)){
            printf ("Triângulo Isósceles!\n");
    }
    return 0;
}
