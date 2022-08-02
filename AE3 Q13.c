#include <stdio.h>

int main(){
    int idade;
    float altura, countAltura = 0, countIdade = 0, mediaIdade, mediaAltura, count = 0;

    idade = -1;

    while (idade != 0){
        printf("\nDigite a idade (0 - Encerrar): ");
        scanf("%d", &idade);
        if (idade != 0)
        {
            printf("Digite a altura: ");
            scanf("%f", &altura);
            countIdade += idade;
            countAltura += altura;
            count += 1;
        } 
    }
    mediaIdade = countIdade / count;
    mediaAltura = countAltura / count;

    printf("\nA media de idade eh de %.1f anos\n", mediaIdade);
    printf("A media de altura eh de %.2f metros\n", mediaAltura);

    return 0;
}
