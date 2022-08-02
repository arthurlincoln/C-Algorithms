#include<stdio.h>

int main(){
    int tamanho, aux;
    int i, j;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];

    for(i = 0; i < tamanho; i++)
    {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: \n");
    for(i = 0; i < tamanho; i++)
    { 
        printf("%d ", vetor[i]);
    }

    //PROCESSO DE ORGANIZAÇÃO PARA O VETOR NA ORDEM DECRESCENTE
    for(i = 0; i < tamanho - 1; i++)
    {
        for(j = i + 1; j < tamanho; j++)
        {
            if(vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nValores vetor na decrescente: \n");
    for(i < tamanho; i >= 0; i--)
    { 
        printf("%d ", vetor[i]);
    }

    return 0;
}