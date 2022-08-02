#include <stdio.h>

int main (){
    int num[5], menor, maior, i;

    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    menor = num[0];
    maior = num[0];

    for(i = 1; i <= 4; i++){
        if (num[i] < menor){
             menor = num[i];
        }
        if (num[i] > maior){
             maior = num[i];
        }
    }
    printf("\nO menor numero eh: %d.\n",menor);
    printf("O maior numero eh: %d.\n",maior);

    return 0;
}