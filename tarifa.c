#include <stdio.h>
int main() {
    double energia, total;

    printf("Digite seu consumo de energia em kWh: \n");
    if (scanf("%lf", &energia) != 1) {
        printf("Entrada inválida! Digite um número usando ponto como separador.\n");
        return 1;
    }

    if (energia < 0) {
        printf("Consumo inválido!\n");
        return 0;

    } else if (energia <= 100) {
        total = energia * 0.50;
        printf("Valor Total:%.2lf\n", total);

    } else if (energia <= 200) {
        total = energia * 0.75;
        printf("Valor Total:%.2lf\n", total);

    } else if (energia <= 500) {
        total = energia * 1.20;
        printf("Valor Total:%.2lf\n", total);

    } else {
        total = energia * 1.38;
        printf("Valor Total:%.2lf\n", total);

    }

    return 0;
}
