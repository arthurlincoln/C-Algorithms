#include <stdio.h>

int main(){
    int num;
    float i, divisao, soma = 0;

    printf("Digite um numero para a quantidade de termos: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        divisao = 1 / i;
        soma = soma + divisao;
    }

    printf("Soma = %.2f\n", soma);

    return 0;
}