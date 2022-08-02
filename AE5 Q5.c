#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30];
    int i, tamanho;

    printf("Digite uma palavra: ");
    gets(palavra);
    fflush(stdin);

    tamanho = strlen(palavra);

    printf("\nPalavra ao contrario: ");
    for (i = tamanho - 1; i >= 0;  i--)
    {
        printf("%c", palavra[i]);
    }
    
    return 0;
}