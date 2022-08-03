#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 21;      //variável do tipo inteiro que indica um número inteiro na memória
    int *ponteiro_num; //variável do tipo ponteiro de inteiro que indica à um enderenço de inteiro na memória

    ponteiro_num = &num;

    printf("Valor da variavel num = %d\n", num);
    printf("Valor de endereco da variavel num = %p\n", &num);
    printf("\nValor da variavel da variavel ponteiro_num = %d\n", *ponteiro_num);
    printf("Valor de endereco da variavel ponteiro_num = %p", ponteiro_num);

    return 0;
}