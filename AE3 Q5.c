#include <stdio.h> 

int main(){
    char frase[100];
    int vezes;

    printf("Digite uma frase: ");
    gets(frase);
    printf("Quantidade de vezes que a frase vai repetir: ");
    scanf("%d", &vezes);

    int i;
    for ( i = 0; i < vezes; i++)
    {
        printf("%s\n", frase);
    }
    
    return 0;
}