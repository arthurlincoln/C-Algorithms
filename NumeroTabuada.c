#include <stdio.h>

int main(){
    int numTabuada;

    printf("Digite o numero da tabuada: ");
    scanf("%d", &numTabuada);

    int i;
    for ( i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", numTabuada, i, numTabuada * i);
    }
    
    return 0;
}
