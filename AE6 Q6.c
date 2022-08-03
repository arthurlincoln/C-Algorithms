#include <stdio.h>

float conversao(float reais, float dolar){
    float valor;
    valor =  reais / dolar;
    return valor;
}

int main(){
    float dolar, reais, valorDolares;
    printf("Digite o valor da cotacao atual do dolar: ");
    scanf("%f", &dolar);
    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    valorDolares = conversao(reais, dolar);

    printf("Com a cotacao atual de US$ %.2f.\nCom R$ %.2f, vc possui %.2f US$\n", dolar, reais, valorDolares);

    return 0;
}