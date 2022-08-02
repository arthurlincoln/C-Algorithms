#include <stdio.h>
#include <math.h>

int main(){
    //variáveis 
    int num, quadrado;
    float raiz;

    //entrada 
    printf("Digite um numero: ");
    scanf("%i", &num);

    //processamento
    quadrado = pow(num, 2);
    raiz = sqrt(num);

    //saída
    printf("\nO quadrado de %i equivale a %i\n", num, quadrado);
    printf("A raiz quadrada de %i equivale a %.2f\n\n",num, raiz);

    return 0;
}