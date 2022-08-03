#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tamanho;
int *vetorA, *vetorB;

int main(){
    int i;
    system("cls");

    printf("Informe o tamanho de um vetor: ");
    scanf("%d", &tamanho);

    vetorA = (int *) malloc(sizeof(int) * tamanho);
    vetorB = (int *) malloc(sizeof(int) * (tamanho * 2));
    
    printf("\nVetor das potencias de 2: \n");
    
    for(i = 0; i < tamanho; i++){
        vetorA[i] = pow(2, i);
        printf("2 elevado a %d = %d\n", i, vetorA[i]);
    }

    printf("\nVetor das potencias de 3: \n");
    for(i = 0; i < tamanho * 2; i++){
        vetorB[i] = pow(3, i);
        printf("3 elevado a %d = %d\n", i, vetorB[i]);
    }
    return 0;
}