#include <stdio.h>
#include <math.h>

int main(){
    //variáveis
    int num1, num2, score;

    //entrada
    printf("Informe o valor do primeiro numero: ");
    scanf("%i", &num1);
    printf("Informe o valor do segundo numero: ");
    scanf("%i", &num2);

    //processamento
    score = pow(num1, num2);

    //saída
    printf("\nCom %i elevado a %i, o resultado e de %i\n", num1, num2, score);

    return 0;
}
