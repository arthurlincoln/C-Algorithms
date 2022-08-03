#include <stdio.h>

int main(){
    int tentativas, i;
    double tempo, maisRapida;

    while (scanf("%d", &tentativas) != EOF)
    {
        maisRapida = 11.0;
        
        for( i = 1; i <= tentativas; i++)
        {
            scanf("%lf", &tempo);

            if (tempo < maisRapida)
            {
                maisRapida = tempo;
            }
        }
        printf("%.2lf\n", maisRapida);
    }        
    return 0;
}