#include <stdio.h>

int main(){

    float n1, n2, n3, n4, n5, n6, positivo =0, media;
    int cont = 0;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    if (n1 > 0)
    {
        positivo += n1;
        cont ++;
    } 
    printf("Digite um numero: ");
    scanf("%f", &n2);
    if (n1 > 0){
        positivo += n2;
        cont ++;
    } 
    printf("Digite um numero: ");
    scanf("%f", &n3);
    if (n1 > 0){
        positivo += n3;
        cont ++;
    } 
    printf("Digite um numero: ");
    scanf("%f", &n4);
    if (n1 > 0){
        positivo += n4;
        cont ++;
    } 
    printf("Digite um numero: ");
    scanf("%f", &n5);  
    if (n1 > 0){
        positivo += n5;
        cont ++;
    } 
    printf("Digite um numero: ");
    scanf("%f", &n6);    
    if (n1 > 0){
        positivo += n6;
        cont ++;
    } 
    media = positivo / cont;

    printf("%d valores positivos\n", cont);
    printf("%.2f\n", media);

    return 0;
}
