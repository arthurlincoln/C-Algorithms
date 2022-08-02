#include <stdio.h>

int main(){
    int num, fatorial;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(fatorial = 1; num > 1; num --){
        fatorial = fatorial * num;
    }

    printf("O fatorial do numero digitado eh %d\n", fatorial);
    return 0;
}
