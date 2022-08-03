#include <stdio.h>
#include <stdlib.h>

int getTamanho(char *palavra) {
    
    int indice = 0;
    
    while (palavra[indice] != '\0')
        indice++;
    
    return indice;
}

int main() {
    char *palavra1 = (char *) malloc(sizeof(char) * 21);
    char *palavra2 = (char *) malloc(sizeof(char) * 21);
    
    int tamanho1, tamanho2, menor, flagResposta = 0, indice = 0;
    
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    
    tamanho1 = getTamanho(palavra1);
    tamanho2 = getTamanho(palavra2);
    menor = (tamanho1 < tamanho2)? tamanho1 : tamanho2;

    while (indice < menor) {
        if (palavra1[indice] > palavra2[indice]) {
            flagResposta = 2;
            break;
        }
        else if (palavra1[indice] < palavra2[indice]) {
            flagResposta = 1;
            break;
        }
        indice++;
    }
    
    if (flagResposta == 2 || (flagResposta == 0 && tamanho2 < tamanho1))
        printf("%s\n%s\n", palavra2, palavra1);
    else if (flagResposta == 1)
        printf("%s\n%s\n", palavra1, palavra2);

    return 0;
}
