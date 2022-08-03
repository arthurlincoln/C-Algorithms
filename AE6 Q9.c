#include <stdio.h>

float conversao(float peso){
    peso = peso * 2.205;
    return peso;
}

int main(){
    float peso, resposta;

    printf("Informe o peso em KG: ");
    scanf("%f", &peso);

    resposta = conversao(peso);

    printf("%.2f KGs = %.2f Lbs\n", peso, resposta);
    return 0;
}