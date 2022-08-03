#include <stdio.h>
#include <conio.h>
#define qtd_palavras 10

int main(){
    FILE *arquivo_palavras;
    char palavra[25];
    int i;

    arquivo_palavras = fopen("palavras.txt", "w");

    if (arquivo_palavras == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
    }
    else
    {
        for (i = 0; i < qtd_palavras; i++)
        {
            printf("Digite uma palavra: ");
            scanf("%s", &palavra);
            fprintf(arquivo_palavras, "%s\n", palavra);
        }
    }
    fclose(arquivo_palavras);

    arquivo_palavras = fopen("palavras.txt", "r");
    
    if(arquivo_palavras == NULL){
        printf("Erro ao abrir o arquivo");
    } 
    else{
        while((fgets(palavra, sizeof(palavra), arquivo_palavras)) != NULL){
            printf("%s", palavra);
        }
    }
    fclose(arquivo_palavras);

    return 0;
}