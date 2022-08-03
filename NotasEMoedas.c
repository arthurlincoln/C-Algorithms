#include <stdio.h>

int main(){
    int reais, centavos, dinheiro;

    printf("Digite o valor: ");
    scanf("%d.%d", &reais, &centavos);

    dinheiro = reais * 100 + centavos; //como coloquei tudo como inteiro, multipliquei reais por 100.

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", dinheiro/10000);
    dinheiro = dinheiro % 10000;
    printf("%d nota(s) de R$ 50.00\n", dinheiro/5000);
    dinheiro = dinheiro % 5000;
    printf("%d nota(s) de R$ 20.00\n", dinheiro/2000);
    dinheiro = dinheiro % 2000;
    printf("%d nota(s) de R$ 10.00\n", dinheiro/1000);
    dinheiro = dinheiro % 1000;
    printf("%d nota(s) de R$ 5.00\n", dinheiro/500);
    dinheiro = dinheiro % 500;
    printf("%d nota(s) de R$ 2.00\n", dinheiro/200);
    dinheiro = dinheiro % 200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", dinheiro/100);
    dinheiro = dinheiro % 100;
    printf("%d moeda(s) de R$ 0.50\n", dinheiro/50);
    dinheiro = dinheiro % 50;
    printf("%d moeda(s) de R$ 0.25\n", dinheiro/25);
    dinheiro = dinheiro % 25;
    printf("%d moeda(s) de R$ 0.10\n", dinheiro/10);
    dinheiro = dinheiro % 10;
    printf("%d moeda(s) de R$ 0.05\n", dinheiro/5);
    dinheiro = dinheiro % 5;
    printf("%d moeda(s) de R$ 0.01\n", dinheiro/1);

    return 0;
}
