#include <stdio.h>

int main(){
    int t, i, valor = 0;

    scanf("%d", &t);
    
    for(i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, valor);
        valor ++;

        if (valor == t){
            valor = 0;
        }
    }
    
    return 0;
}