#include <stdio.h>
 
int main(){
    //variáveis 
    float n1, n2, n3, n4, media;
    
    //entrada
    printf("Informe a nota 1: "); 
    scanf("%f", &n1);
    printf("Informe a nota 2: "); 
    scanf("%f", &n2);
    printf("Informe a nota 3: ");
    scanf("%f", &n3); 
    printf("Informe a nota 4: ");
    scanf("%f", &n4);
 
    //processamento
    media = (n1 + n2 + n3 + n4) / 4;
 
    //saída 
    printf("\nA media geral foi: %.1f\n", media);
}
