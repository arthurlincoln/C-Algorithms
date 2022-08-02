#include <stdio.h>

int main(){
    int codigoEstado, codigoCarga;
    float pesoCarga, pesoKg, imposto, preco, total;
    
    printf("Digite o peso da carga em toneladas: ");
    scanf("%f", &pesoCarga);
    printf("Digite o codigo da carga: ");
    scanf("%d" ,&codigoCarga);
    printf("Digite o codigo do estado: ");
    scanf("%d" ,&codigoEstado);
    
    pesoKg = pesoCarga*1000;
    
    if(codigoCarga >=10 && codigoCarga <=20){
        preco = pesoKg * 180;    
    }
    else if(codigoCarga >= 21 && codigoCarga <= 30){
        preco = pesoKg * 120;    
    }
    else if(codigoCarga >= 31 && codigoCarga <= 40){
        preco = pesoKg * 230;    
    }
    else{
        printf("Codigo da carga invalido");
    }
    
    if(codigoEstado == 1){
        imposto = (preco * 20)/100;
    }
    else if(codigoEstado == 2){
        imposto = (preco * 15)/100;
    }
    else if(codigoEstado == 3){
        imposto = (preco * 10)/100;
    }
    else if(codigoEstado == 4){
        imposto = (preco * 5)/100;
    }
    else{
        printf("Codigo do Estado invalido");
    }
    total = preco + imposto;

    printf("\nO peso da carga eh de %.2f Kgs\n", pesoKg);
    printf("o preço da carga eh igual a R$ %.2f\n", preco); 
    printf("o valor do imposto igual a R$ %.2f\n", imposto); 
    printf("O valor total foi de R$ %.2f\n", total);

    return 0;
}