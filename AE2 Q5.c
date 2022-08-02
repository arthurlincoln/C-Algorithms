#include <stdio.h>

int main(){
    int codigoCarga, codigoEstado;
    float preco, imposto, pesoTonelada, pesoKg, valorTotal;

    printf("Digite o codigo da Estado (1 - 4): ");
    scanf("%d", &codigoEstado);
    printf("Digite o codigo da carga (10-20, 21-30, 31-40): ");
    scanf("%d", &codigoCarga);
    printf("Informe o peso da carga em Toneladas: ");
    scanf("%f", &pesoTonelada);

    pesoKg = pesoTonelada * 1000;

    if (codigoEstado == 1)
    {
        if (codigoCarga >= 10 && codigoCarga <=20)
        {
            preco = 180.00 * pesoKg;
            imposto = preco * 0.20;
            valorTotal = preco + imposto;
        }
        else if  (codigoCarga >= 21 && codigoCarga <=30)
        {
            preco = 120.00 * pesoKg;
            imposto = preco * 0.20;
            valorTotal = preco + imposto;
        }
        else if  (codigoCarga >= 31 && codigoCarga <=40)
        {
            preco = 230.00 * pesoKg;
            imposto = preco * 0.20;
            valorTotal = preco + imposto;
        }
        else
        {
            printf("Codigo de carga nao cadastrado\n");
        }

    }
    else if (codigoEstado == 2)
    {
        if  (codigoCarga >= 10 && codigoCarga <=20)
        {
            preco = 180.00 * pesoKg;
            imposto = preco * 0.15;
            valorTotal = preco + imposto;
        }
        else if (codigoCarga >= 21 && codigoCarga <=30)
        {
            preco = 120.00 * pesoKg;
            imposto = preco * 0.15;
            valorTotal = preco + imposto;
        }
        else if (codigoCarga >= 31 && codigoCarga <=40)
        {
            preco = 230.00 * pesoKg;
            imposto = preco * 0.15;
            valorTotal = preco + imposto;
        }
        else
        {
            printf("Codigo de carga nao cadastrado");
        }   
    }
    else if (codigoEstado == 3)
    {
        if (codigoCarga >= 10 && codigoCarga <=20)
        {
            preco = 180.00 * pesoKg;
            imposto = preco * 0.10;
            valorTotal = preco + imposto;
        }
        else if (codigoCarga >= 21 && codigoCarga <=30)
        {
            preco = 120.00 * pesoKg;
            imposto = preco * 0.10;
            valorTotal = preco + imposto;
        }
        else if (codigoCarga >= 31 && codigoCarga <=40)
        {
            preco = 230.00 * pesoKg;
            imposto = preco * 0.10;
            valorTotal = preco + imposto;
        }
        else
        {
            printf("Codigo de carga nao cadastrado");
        }   
    }
    else if (codigoEstado == 4)
    {        if (codigoCarga >= 10 && codigoCarga <=20)
        {
            preco = 180.00 * pesoKg;
            imposto = preco * 0.10;
            valorTotal = preco + imposto;
        }
        else if (codigoCarga >= 21 && codigoCarga <=30)
        {
            preco = 120.00 * pesoKg;
            imposto = preco * 0.10;
            valorTotal = preco + imposto;
        }
        else if (codigoCarga >= 31 && codigoCarga <=40)
        {
            preco = 230.00 * pesoKg;
            imposto = preco * 0.10;
            valorTotal = preco + imposto;
        }
        else
        {
            printf("Codigo de carga nao cadastrado");
        }  
        
    }
    
    printf("O peso da carga em Quilos: %.2f kgs\n", pesoKg);
    printf("O preco da carga foi de %.2f reais\n", preco);
    printf("O valor do imposto foi %.2f reais\n", imposto);
    printf("O valor total da carga foi de %.2f reais\n", valorTotal);

    return 0;
}