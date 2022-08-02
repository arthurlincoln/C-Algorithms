#include <stdio.h>

int main(){
    int sexo;
    float altura, peso;

    printf("Informe seu sexo (1 - Masculino / 2 - Feminino): ");
    scanf("%d", &sexo);
    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);

    if (sexo == 1){
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal eh de %.2f Kgs\n", peso);
    }
    else if (sexo == 2){
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh de %.2f Kgs\n", peso);
    }
    else
    {
        printf("Sexo inválido\n");
    }
    
    return 0;
}
