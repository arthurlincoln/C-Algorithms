#include <stdio.h>

int main(){
    int pessoasAndar1, pessoasAndar2, pessoasAndar3;
    int tempo1, tempo2, tempo3;
    int maisEficiente;

    //printf("Quantidade de pessoas que trabalham em cada andar: ");
    scanf("%d", &pessoasAndar1);
    scanf("%d", &pessoasAndar2);
    scanf("%d", &pessoasAndar3);

    tempo1 = 2 * pessoasAndar2 + 4 * pessoasAndar3;
    tempo2 = 2 * pessoasAndar1 + 2 * pessoasAndar3;
    tempo3 = 4 * pessoasAndar1 + 2 * pessoasAndar2;

    if (tempo1 <= tempo2 && tempo1 <= tempo3)
    {
        maisEficiente = tempo1;
    }
    else if (tempo2 <= tempo1 && tempo2 <= tempo3)
    {
        maisEficiente = tempo2;
    }
    else
    {
        maisEficiente = tempo3;
    }

    //tempo em minutos 
    printf("%d\n", maisEficiente);   
    return 0;
}