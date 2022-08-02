#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0){
        printf("O numero %d eh divisivel por 3\n", num);
    }
    else{
        printf("O numero %d nao eh divisivel por 3\n", num);
    }

    if (num % 7 == 0){
        printf("O numero %d eh divisivel por 7\n", num);
    }
    else{
        printf("O numeor %d nao eh divisivel por 7\n", num);
    }

    return 0;
}
