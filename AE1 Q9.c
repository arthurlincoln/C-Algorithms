#include <stdio.h>

int main(){
    //variáveis 
    float deposito, rendimento, total, juros;

    //entrada
    printf("Informe o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Qual a da taxa de juros? ");
    scanf("%f", &juros);

    //processamento
    rendimento = deposito * (juros/100);
    total = deposito + rendimento;

    //saída
    printf("O rendimento foi de %.2f\n", rendimento);
    printf("O valor total foi de %.2f\n", total);

    return 0;
}