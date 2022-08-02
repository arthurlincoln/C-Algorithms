#include <stdio.h>
#include <string.h>

int main(){
    int i, tamanho;
    char palavra[30];

    printf("Digite uma palavra: ");
    gets(palavra);
    fflush(stdin);

    tamanho = strlen(palavra);
    printf("Quantidade de repeticoes = %d\n", tamanho);

    for ( i = 0; i < tamanho; i++)
    {
        printf("Repeticao [%d]: %s\n", i + 1, palavra);
    }
    
    return 0;
}