#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o querto numero: ");
    scanf("%d", &num4);

    media = ((float)num1 + num2 + num3 + num4) / 4;

    printf("A media dos 4 numeros eh de %.2f\n", media);

    return 0;
}
