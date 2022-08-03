#include <stdio.h>

int main(){
    int n, i, valor, menor, posicao;

    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    menor = vetor[0];

    for (i = 0; i < n; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    
    return 0;
}