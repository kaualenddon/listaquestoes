#include <stdio.h>

int main() {
    int codigo, quantidade, temSobremesa;
    float preco, valorProdutos, valorSobremesa;
    float subtotal, desconto, valorFinal;

    valorSobremesa = 0; 

    printf("===== MENU =====\n");
    printf("1 - Hamburguer ........ R$ 18,00\n");
    printf("2 - X-Salada .......... R$ 22,00\n");
    printf("3 - X-Bacon ........... R$ 25,00\n");
    printf("4 - Batata Frita ...... R$ 12,00\n");
    printf("5 - Refrigerante ...... R$ 7,00\n");
    printf("================\n\n");

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    printf("Deseja sobremesa? (1-Sim / 0-Nao): ");
    scanf("%d", &temSobremesa);

    switch (codigo) {
        case 1:
            preco = 18.00;
            break;
        case 2:
            preco = 22.00;
            break;
        case 3:
            preco = 25.00;
            break;
        case 4:
            preco = 12.00;
            break;
        case 5:
            preco = 7.00;
            break;
        default:
            printf("\nProduto invalido!\n");
            return 0;
    }
    
    valorProdutos = preco * quantidade;

    if (temSobremesa == 1) {
        valorSobremesa = 8.00;
    }

    subtotal = valorProdutos + valorSobremesa;

    if (subtotal > 100.00) {
        desconto = subtotal * 0.10;
    } else if (subtotal >= 50.00) {
        desconto = subtotal * 0.05;
    } else {
        desconto = 0.00;
    }

    valorFinal = subtotal - desconto;

    printf("\n=== RESUMO DO PEDIDO ===\n");
    printf("Codigo do produto: %d\n", codigo);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor dos produtos: R$ %.2f\n", valorProdutos);
    printf("Valor da sobremesa: R$ %.2f\n", valorSobremesa);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);
    printf("========================\n");

    return 0;
}
