#include <stdio.h> 

int main(){
    char palavra[30];
    int vezes;

    printf("Digite uma palavra: ");
    gets(palavra);
    printf("Quantidade de vezes que a frase vai repetir: ");
    scanf("%d", &vezes);

    int i;
    for ( i = 0; i < vezes; i++)
    {
        printf("%s\n", palavra);
    }
    
    return 0;
}
