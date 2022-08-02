#include <string.h>
#include <stdio.h>

int main(){
    int count = 0, tamanho;
    char nome[30];

    printf("Digite um nome: ");
    gets(nome);

    tamanho = strlen(nome);

    printf("\nLETRAS NAS POSICOES PARES:\n"); 
    while (count <= tamanho - 1){
        printf("[%d] = %c\n", count, nome[count]);
        count += 2;
    }
    printf("\n");

    return 0;
}