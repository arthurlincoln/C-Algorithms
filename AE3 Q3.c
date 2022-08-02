#include <stdio.h>

int main(){
    int n1 = 201, n2 = 499, soma = 0;
    
    int i;
    for (i = n1; i <= n2; i += 2){
        soma += i;
    }
    printf("A soma dos impares de 200 a 500 equivale a %d\n", soma);
    
    return 0;
}