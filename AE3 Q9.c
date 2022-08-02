/*#include <stdio.h>

int main(){
    int numero, fatorial;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    int i;
    for ( fatorial = 1; i > 1; i = i - 1)
    {
        fatorial = fatorial * i;
    }
    printf("%d! =  %d\n",  numero, fatorial);
    
    return 0;
}

#include <stdio.h>
int main(){
int fat, n;
printf("Insira numero inteiro : ");
scanf("%d", &n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nFatorial calculado: %d", fat);
return 0;
}*/

#include <stdio.h>

int main(){
    int num, fatorial;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(fatorial = 1; num > 1; num --){
        fatorial = fatorial * num;
    }

    printf("O fatorial do numero digitado eh %d\n", fatorial);
    return 0;
}