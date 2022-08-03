/*#include <stdio.h>

int main(){
    int notas, moedas;
    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1r, moeda50cent, moeda25cent, moeda10cent, moeda5cent, moeda01cent;
    float dinheiro;

    printf("Digite o valor do dinheiro: ");
    scanf("%f", &dinheiro);

    notas = dinheiro;
    moedas = (dinheiro - notas) * 100; //multiplica por 100 para chegar ao valor correto pra o calculo das moedas  

    nota100 = notas / 100;
    notas = notas % 100;
    nota50 = notas / 50;
    notas = notas % 50;
    nota20 = notas / 20;
    notas = notas % 20;
    nota10 = notas / 10;
    notas = notas %10;
    nota5 = notas / 5;
    notas = notas % 5;

    moeda1r = notas / 1;
    notas = notas % 1;
    moeda50cent = moedas / 50;
    moedas = moedas % 50;
    moeda25cent = moedas / 25;
    moedas = moedas % 25;
    moeda10cent = moedas / 10;
    moedas = moedas % 10;
    moeda5cent = moedas / 5;
    moedas = moedas % 5;
    moeda01cent = moedas / 1;
    moedas = moedas % 1;    

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n",  nota50);
    printf("%d nota(s) de R$ 20.00\n",  nota20);
    printf("%d nota(s) de R$ 10.00\n",  nota20);
    printf("%d nota(s) de R$ 5.00\n",   nota10);
    printf("%d nota(s) de R$ 2.00\n",   nota2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1r);
    printf("%d moeda(s) de R$ 0.50\n", moeda50cent);
    printf("%d moeda(s) de R$ 0.25\n", moeda25cent);
    printf("%d moeda(s) de R$ 0.10\n", moeda10cent);
    printf("%d moeda(s) de R$ 0.05\n", moeda5cent);
    printf("%d moeda(s) de R$ 0.01\n", moeda01cent);

    return 0;

}*/

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