#include <stdio.h>
#define tamanho 20

int main(){
    int vetorA[tamanho], vetorB[tamanho], vetorC[tamanho];
    int i, j, aux;
    
    for (i = 0; i < tamanho; i++){
        printf("Digite o %d elemento do vetorA: " , i + 1);
        scanf("%d", &vetorA[i]);
    }
    
    for (i = 0; i < tamanho; i++){
        printf("Digite o %d elemento do vetorB: " , i + 1);
        scanf("%d", &vetorB[i]);
    }
    printf("\n");
    printf("Vetor C: \n");
    for(i = 0; i < tamanho; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("%d ", vetorC[i]);   
    }
    

    for(i = 0; i < tamanho - 1; i++)
    {    
        for(j = i + 1; j < tamanho; j++)
        {
            if(vetorC[i] > vetorC[j])
            {    
                aux = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = aux;
            }
        }
    }
    
    printf("\n");
    printf("\nVetor C na crescente: \n");
    for(i = 0; i < tamanho; i++)
    { 
        printf("%d ", vetorC[i]);
    }    
    return 0;
}