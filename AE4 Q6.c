#include <stdio.h>
#define tamanho 30

int main(){
    int i;
    int vetor[tamanho];

    for(i = 0; i < tamanho; i ++)
    {
        printf("Digite o  elemento %d: ", i +1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor: ");
    for ( i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\nVetor ao contrario: ");
    for(i = tamanho - 1; i >= 0; i --)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}