#include <stdio.h>

int main(){
    int prato, bebida, calPrato, calBebida, totalCal;

    printf("PRATOS\n[1] - Italiano\n[2] - Japones\n[3] - Salvadoreno\n");
    printf("\nBEBIDAS\n[1] - Cha\n[2] - Suco de Laranja\n[3] - Refrigerante\n");

    printf("\nDigite um numero para escolher um prato: ");
    scanf("%d", &prato);
    printf("Digite um numero para escolher uma bebida: ");
    scanf("%d", &bebida);

    if (prato == 1){
        calPrato = 750;
    }
    else if (prato == 2){
        calPrato = 342;
    }
    else if (prato == 3){
        calPrato = 545;
    }
    else{
        printf("Numero digitado nao corresponde a nenhum prato\n");
    }

    if (bebida == 1){
        calBebida = 30;
    }
    else if (bebida == 2){
        calBebida = 80;
    }
    else if (bebida == 3){
        calBebida = 90;
    }
    else{
        printf("Numero digitado nao corresponde a nenhuma bebida\n");
    }

    totalCal = calPrato + calBebida;

    printf("\nA combinacao das escolhas resultara em %d calorias\n", totalCal);
    
    return 0;
}
