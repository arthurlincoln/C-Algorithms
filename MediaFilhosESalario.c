#include <stdio.h>

int main(){
    float salario, somaFilhos, mediaFilhos, somaSalario, mediaSalario, maior = 0;
    int numFilhos, count = 0;

    printf("Digite o salario (-1 para encerrar): ");
    scanf("%f", &salario);

    while (salario != -1)
    {
        if (salario >= 0){
            printf("Digite a quantidade de filhos: ");
            scanf("%d", &numFilhos);
            if (salario > maior){
                maior = salario;
            }
            count += 1;
            somaSalario += salario;
            somaFilhos += numFilhos;    
        }
    printf("\nDigite o salario (-1 para encerrar): ");
    scanf("%f", &salario);
    }
    mediaFilhos = somaFilhos/count;
    mediaSalario = somaSalario/count;
    
    printf("\nA media de filhos eh de %.1f\n", mediaFilhos);   
    printf("O maior salario eh R$ %.2f\n", maior);
    printf("A media do salario eh de R$ %.2f\n", mediaSalario);
    return 0;
}
