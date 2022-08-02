#include <stdio.h>

int main(){
    //variáveis
    int num, anterior, sucessor;

    //entrada de dados 
    printf("Digite um numero: ");
    scanf("%d", &num);

    //processamento
    anterior = num - 1;
    sucessor = num + 1;

    //saída
    printf("O numero anterior de %d e %d\n", num, anterior);
    printf("O numero sucessor de %d e %d\n", num, sucessor);

    return 0;
}
