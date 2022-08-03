#include <stdio.h>

int somaFuncao(int num1, int num2){
    int i, soma;
    for (i = num1; i <= num2; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("A soma total dos valores entre %d e %d = %d", num1, num2, somaFuncao(num1, num2));
    return 0;
}