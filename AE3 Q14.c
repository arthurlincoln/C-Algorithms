#include <stdio.h>

int main(){
    printf("1- Satisfatorio\n2- Indiferente\n3- Insatisfatorio\n");

    float media;
    int idade, opiniao, satisfatorio = 0, indiferente, insatisfatorio = 0, somaidade = 0;
    idade = -1;

    while (idade != 0){
        printf("Digite a idade (o - Encerrar): ");
        scanf("%d", &idade);
        if (idade != 0){
            printf("Digite um numero para sua opiniao: ");
            scanf("%d", &opiniao);
            if (opiniao == 1){
                satisfatorio += 1;
                somaidade += idade;
            }
            else if (opiniao == 3){
                insatisfatorio += 1;
            }       
        }
        printf("\n");
    }
    media = somaidade/satisfatorio;
    printf("\n%d pessoas responderam satisfeito e a media de idade eh de %.2f\n", satisfatorio, media);
    printf("Teve %d pessoas insatisfeitas\n", insatisfatorio);
    return 0;
}