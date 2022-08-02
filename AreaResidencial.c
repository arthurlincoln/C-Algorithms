#include <stdio.h>

int main(){
    char nome[50];
    int stop;    
    float largura, comprimento, contLargura = 0, contComprimento = 0, areaComodo, areaTotal;

    stop = -1;
 
    while (stop != 0)
    {
        printf("Informe o comodo: ");
        scanf("%s", nome);
        printf("Informe a largura do comodo em metros: ");
        scanf("%f", &largura);
        printf("Informe o comprimento do comodo em metros: ");
        scanf("%f", &comprimento);

        contLargura += largura;
        contComprimento += comprimento;

        areaComodo = largura * comprimento;
        printf("A area do %s eh de %.2f metros\n", nome, areaComodo);

        printf("\nDigite [1] para continuar | [0] para encerrar FIM: ");
        scanf("%d", &stop);    
    }

    areaTotal = contLargura * contComprimento;
    printf("\nA area residencial total eh de %.2f metros\n", areaTotal);

    return 0; 
}
