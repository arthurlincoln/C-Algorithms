#include <stdio.h>

int positivoNegativo(int numero){
    if (numero >= 0){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
    int numero, resposta;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    resposta = positivoNegativo(numero);

    if (resposta == 1){
        printf("POSITIVO\n");
    }
    else if (resposta == -1)
    {
        printf("NEGATIVO\n");
    }

    return 0;
}
