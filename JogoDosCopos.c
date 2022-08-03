#include <stdio.h>

int main() {
    int copo, troca;
    char posicao;

    scanf("%d %c", &copo, &posicao);
    
    while (copo--) {
        
        scanf("%d", &troca);
        
        if (troca == 1 && (posicao == 'A' || posicao == 'B'))
        {
            posicao = (posicao == 'A'? 'B' : 'A');
        }
        else if (troca == 2 && (posicao == 'B' || posicao == 'C'))
        {
            posicao = (posicao == 'B'? 'C' : 'B');
        }
        else if (troca == 3 && (posicao == 'A' || posicao == 'C')){
            posicao = (posicao == 'C'? 'A' : 'C');
        }
    }
    
    printf("%c", posicao);

    return 0;
}
