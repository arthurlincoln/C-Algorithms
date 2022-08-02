#include <stdio.h>

int main(){
    int numeroPedido, dia, mes, ano, quantidade;
    float precoUni, totalCompra, totalGeral;

    printf("Numero do pedido (0 - Encerrar): ");
    scanf("%d", &numeroPedido);
    
    while (numeroPedido != 0)
    {
        printf("Informe o dia: ");
        scanf("%d", &dia);
        printf("Informe o mes: ");
        scanf("%d", &mes);
        printf("Informe o ano: ");
        scanf("%d", &ano);

        printf("Informe o preco do produto: ");
        scanf("%f", &precoUni);
        printf("Informe a quantidade do pedido: ");
        scanf("%i", &quantidade);    
            
        totalCompra = precoUni * quantidade;
        totalGeral += totalCompra;

        printf("Data da compra foi %d/%.2d/%d\n", dia, mes, ano);
        printf("O total da compra foi de R$ %.2f\n", totalCompra);

        printf("\nNumero do pedido (0 - Encerrar): ");
        scanf("%d", &numeroPedido);
    }
    printf("O total de todas as compras foi de RS %.2f.", totalGeral);

    return 0;
}