#include <stdio.h>

int main() {
    int opcao;
    float saldo, valor;
    
    saldo = 1000.00;

    printf("===== CAIXA ELETRONICO =====\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar\n");
    printf("3 - Sacar\n");
    printf("4 - Verificar limite\n");
    printf("5 - Encerrar\n");
    printf("============================\n\n");

    printf("Escolha uma operacao (1 a 5): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nSaldo atual: R$ %.2f\n", saldo);
            break;

        case 2:
            printf("\nDigite o valor a depositar: ");
            scanf("%f", &valor);

            if (valor > 0) {
                saldo = saldo + valor;
                printf("Deposito realizado com sucesso!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
            } else {
                printf("Valor invalido para deposito!\n");
            }
            break;

        case 3:
            printf("\nDigite o valor que deseja sacar: ");
            scanf("%f", &valor);

            if (valor <= 0) {
                printf("Valor invalido para saque!\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente!\n");
            } else {
                saldo = saldo - valor;
                printf("Saque realizado com sucesso!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
            }
            break;

        case 4:
            {
                float limite = saldo * 0.30;
                printf("\nLimite disponivel para saque: R$ %.2f\n", limite);
            }
            break;

        case 5:
            printf("\nOperacao encerrada. Obrigado por utilizar nosso caixa eletronico!\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
            break;
    }

    return 0;
}
