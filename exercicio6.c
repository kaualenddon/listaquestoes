#include <stdio.h>

int main() {
    int a, b, op, resultado;

    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);

    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);

    printf("\n===== MENU DE OPERACOES =====\n");
    printf("1 - E bit a bit (&)\n");
    printf("2 - OU bit a bit (|)\n");
    printf("3 - OU exclusivo (^)\n");
    printf("4 - Deslocamento a esquerda (<<)\n");
    printf("5 - Deslocamento a direita (>>)\n");
    printf("=============================\n");
    
    printf("Escolha a operacao (1 a 5): ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            resultado = a & b; 
            break;
        case 2:
            resultado = a | b;
            break;
        case 3:
            resultado = a ^ b;
            break;
        case 4:
            resultado = a << b;
            break;
        case 5:
            resultado = a >> b;
            break;
        default:
            printf("\nOperacao invalida!\n");
            return 0;
    }
    printf("\n--- RESULTADO ---\n");
    printf("Em decimal: %d\n", resultado);
    printf("Em hexadecimal: 0x%X\n", resultado);
    printf("-----------------\n");

    return 0;
}
