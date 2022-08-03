#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int *ponteiro;

    ponteiro = (int *) malloc(sizeof(int));
    *ponteiro = 42;

    printf("Endereco: %p\nValor: %d\n", ponteiro, *ponteiro);
    return 0;
}