#include <stdio.h>
#define tamanho 5

int main(){
    int vetorA[tamanho] ,vetorB[tamanho], diferenca[tamanho];
    int i;
    
    for(i = 0; i < tamanho; i++)
    {
        printf("Digite os elemento %d do vetor A: ", i + 1);
        scanf("%d", &vetorA[i]);
    }
    printf("\n");
    for(i = 0; i < tamanho; i++)
    {
        printf("Digite os elemento %d do vetor B: ", i + 1);
        scanf("%d", &vetorB[i]);
    }
    printf("\nDiferenca dos elementos: \n");
    for(i = 0; i < tamanho; i++)
    {
        diferenca[i] = vetorA[i] - vetorB[i];
        printf("%d ", diferenca[i]);
    }

    return 0;
}
