#include <stdio.h> 
#define tamanho 10

int vetor[tamanho];

int ordem(){
    int i, j, aux;
    for( i = 0; i < tamanho; i++){
        for(j = i + 1; j < tamanho; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main(){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("Digite o elemento %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    ordem();

    printf("\nVetor Ordenado: ");
    for (i = 0; i < tamanho; i++){ 
        printf("%d ", vetor[i]);
    }
}
