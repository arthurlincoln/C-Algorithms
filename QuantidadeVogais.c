#include <stdio.h>
#include <string.h>

int vogais(char palavra[]){
    int i, tamanho, qtdvogais = 0;

    palavra = strlwr(palavra);
    tamanho = strlen(palavra);

    for (i = 0; i < tamanho; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            qtdvogais ++;
        }        
    }
    return qtdvogais;
}

int main(){
    char palavra[25];
    int resposta;

    printf("Digite uma palavra: ");
    gets(palavra);

    resposta = vogais(palavra);
    printf("Possui %d vogais\n", resposta);
    return 0;
}
