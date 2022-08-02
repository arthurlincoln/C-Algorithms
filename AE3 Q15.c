#include <stdio.h>

int main(){
    int num, count = 0, soma = 0, maior = 0, menor = 0, impar = 0, par = 0;
    float media;
    num = -1;

    while (num != 0) {
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &num);
        if (num != 0 ) {
            count ++;
            soma +=num;
        if (num > maior) {
            maior = num;
        }
        else if (num < menor) {
            menor = num;
        }
        if (num % 2 == 0) {
            par ++;
        }
        else {
            impar ++;
        }    
            
        }
    }
    media = soma / count;
     
    printf("MEDIA DOS NUMEROS = %.1f\n", media); 
    printf("MAIOR: %d | MENOR: %d\n", maior, menor); 
    printf("TEM %d PARES E %d IMPARES\n", par, impar);

    return 0;
}