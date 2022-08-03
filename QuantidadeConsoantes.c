#include <stdio.h>
#include <string.h>

int consoantes(char nome[]){
    int i, tamanho, qtdconsoantes = 0;

    nome = strlwr(nome); 
    tamanho = strlen(nome);

    for (i =0; i < tamanho; i++)
    {
        if((nome[i] != 'a') && (nome[i] !='e') && (nome[i] !='i') && (nome[i] !='o') && (nome[i] != 'u') && (nome[i] != ' '))
        {
            qtdconsoantes ++;
        }
    }
    return qtdconsoantes;
}
 
int main(){
    int total;
    char palavra[25];

    printf("Digite uma palavra: ");
    gets(palavra);

    total = consoantes(palavra);

    printf("%d consoantes\n", total);

    return 0;
}
