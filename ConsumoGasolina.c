#include <stdio.h>

int main(){
    float km, litro, consumo, kmGeral = 0, litroGeral = 0, consumoGeral;

    printf("Informe quantos litros abasteceu (-1 para terminar): ");
    scanf("%f", &litro);

    while (litro >= 0)
    {

        printf("Informe quantos km dirigiu: ");
        scanf("%f", &km);
        consumo = km / litro;
        
        kmGeral += km;
        litroGeral += litro; 
        
        printf("O consumo atual e de %f km/l\n", consumo);

        printf("\nInforme quantos litros abasteceu (-1 para terminar): ");
        scanf("%f", &litro);
    }
    
    consumoGeral = kmGeral / litroGeral;

    printf("\nO consumo geral foi de %f km/l\n", consumoGeral);

    return 0;
}
