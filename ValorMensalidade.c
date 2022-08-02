#include <stdio.h>

int main(){
    char nome[50];
    int idade;

    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade <= 18){
        printf("\nOi, %s!\nCom %d anos de idade, o valor da mensalidade eh R$ 50,00\n", nome, idade);
    }
    else if (idade >= 19 && idade <= 29){
        printf("\nOi, %s!\nCom %d anos de idade, o valor da mensalidade eh R$ 70,00\n", nome, idade);
    }   
    else if (idade >= 30 && idade <= 45){
        printf("\nOi, %s!\nCom %d anos de idade, o valor da mensalidade eh R$ 90,00\n", nome, idade);
    }
    else if (idade >= 46 && idade <= 65){
        printf("\nOi, %s!\nCom %d anos de idade, o valor da mensalidade eh R$ 130,00\n", nome, idade);
    }
    else{
        printf("\nOi, %s!\nCom %d anos de idade, o valor da mensalidade eh R$ 170,00\n", nome, idade);
    }

    return 0;
}
