#include <stdio.h>
#define tamanho 100

int main(){
    float vetor[tamanho];
    int i;

    for (i = 0; i < tamanho; i++) 
    {
        scanf("%f", &vetor[i]);
    }
    
    for (i = 0; i < tamanho; i++)
    {
        if(vetor[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }
    
    return 0;
}