#include <stdio.h>
#include <string.h>                         

int main(){    
    char palavra[25];
    int tamanho, count = 0, i;
    
    printf ("Informe uma PALAVRA: ");
    fflush(stdin);
    scanf ("%s", palavra);
    tamanho = strlen (palavra);
    
    if (tamanho % 2 != 0)
    {
        for (i = 0 ; i < tamanho ; i++)
        {
            if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u')
            {
                count ++;
                printf("Consoantes da palavra: %c\n", palavra[i]);
            }
        }
        printf("\nA palavra *%s* tem %d consoantes", palavra, count);
    }

    else
    {
            printf("Palavra com numero de letras par.");
    }
    
    return 0;
}
