#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero de 1 - 12 e saiba o mes correspondente: ");
    scanf("%d", &num);

    if (num == 1){
        printf("O numero %d corresponde ao mes de Janeiro\n", num);
    }
    else if (num == 2){
        printf("O numero %d corresponde ao mes de Fevereiro\n", num);
    }
    else if (num == 3){
        printf("O numero %d corresponde ao mes de Março\n", num);
    }
    else if (num == 4){
        printf("O numero %d corresponde ao mes de Abril\n", num);
    }
    else if (num == 5){
        printf("O numero %d corresponde ao mes de Maio\n", num);
    }
    else if (num == 6){
        printf("O numero %d corresponde ao mes de Junho\n", num);
    }
    else if (num == 7){
        printf("O numero %d corresponde ao mes de Julho\n", num);
    }
    else if (num == 8){
        printf("O numero %d corresponde ao mes de Agosto\n", num);
    }
    else if (num == 9){
        printf("O numero %d corresponde ao mes de Setembro\n", num);
    }
    else if (num == 10){
        printf("O numero %d corresponde ao mes de Outubro\n", num);
    }
    else if (num == 11){
        printf("O numero %d corresponde ao mes de Novembro\n", num);
    }
    else if (num == 12){
        printf("O numero %d corresponde ao mes de Dezembro\n", num);
    }
    else {
        printf("O numero %d nao corresponde a nenhum mes do ano\n", num);
    }
    
    return 0;
}
