#include <stdio.h>

int i, quantidade; 

int somatorioPares(){
    int soma = 0;
    for (i = 1; i <= quantidade * 2; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }
    return soma;
}

int main(){
    int resposta;
    printf("Quantidade de numeros pares que deseja somar: ");
    scanf("%d", &quantidade);

    resposta = somatorioPares();
    printf("Soma dos primeiros %d numeros pares = %d", quantidade, resposta);
    return 0;
}