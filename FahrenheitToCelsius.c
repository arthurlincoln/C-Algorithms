#include <stdio.h>

float conversao(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;

    return fahrenheit;
}

int main(){
    float celsius, resposta;

    printf("Digite a tempetura em Celsius: ");
    scanf("%f", &celsius);

    resposta = conversao(celsius);
    printf("Temperatura em Fahrenheit: %.1f F\n", resposta);
    return 0;
}
