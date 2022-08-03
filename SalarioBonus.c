#include <stdio.h>

int main(){
    char nome[30];
    float salarioFixo, vendas, total_final;

    scanf("%s", nome);     
    scanf("%f", &salarioFixo);
    scanf("%f", &vendas);


    total_final = salarioFixo + ((vendas * 15)/100);

    printf("TOTAL = R$ %.2f\n", total_final);

    return 0;
}
