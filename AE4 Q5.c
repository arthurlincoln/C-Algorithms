#include <stdio.h>

int main(){
    int matrizA[5][5], matrizB[5][5], diferenca[5][5], soma[5][5];
    int i, j;
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Informe a posicao da Matriz A [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Informe a posicao da Matriz B [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }
    printf("\n");
    printf("\nDIFERENCA:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
        diferenca[i][j] = matrizA[i][j] - matrizB[i][j];
        printf("%d\t", diferenca[i][j]);
        }
        printf("\n");
    } 

    printf("\n");
    printf("SOMA:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d\t", soma[i][j]);
        }
    printf("\n");
    }

    return 0;
}