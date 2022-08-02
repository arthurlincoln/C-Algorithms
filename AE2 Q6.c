#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 5 ==0){
        printf("O numero %d eh divisivel por 5", num);
    }
    else{
        printf("o numero %d nao eh divisivel por 5", num);
    }
    
    return 0;
}
