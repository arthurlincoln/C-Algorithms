#include <stdio.h>
#include <math.h>

int main(){
    //variaveis
    float raio, perimetro, area;
    
    //entrada 
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    //processamento  pi = 3.14
    perimetro = 2 * 3.14 * raio;
    area = 3.14 * (pow(raio, 2));

    //saída
    printf("Um circulo com raio de %.2f, tem um perimetro de %.2f\n", raio, perimetro);
    printf("E o sua area e de %.2f\n", area); 

    return 0;  
}