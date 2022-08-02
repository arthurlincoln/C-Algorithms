#include <stdio.h>

int main(){
    int cargo;
    float salario, aumento, salarioNovo;

    printf("Codigos dos cargos:\n1 - Servente\n2 - Pedreiro\n3 - Mestre de obras\n4 - Tecnico de Seguranca\n");
    printf("\nDigite 1 - 4 para esclher o cargo: ");
    scanf("%d", &cargo);

    printf("Informe o salario atual em Reais: ");
    scanf("%f", &salario);

    if ( cargo == 1)
    {
        aumento = salario * 0.40;
        salarioNovo = salario + aumento;
        printf("\nSeu cargo eh de Servente\n");
        printf("Aumento de %.2f reais\nNovo salario de %.2f reais\n", aumento, salarioNovo);
    }
    else if (cargo == 2)
    {
        aumento = salario * 0.30;
        salarioNovo = salario + (salario * 0.35);

        printf("\nSeu cargo eh de Pedreiro\n");
        printf("Aumento de %.2f reais\nNovo salario de %.2f reais\n", aumento, salarioNovo);
    }
    else if (cargo == 3)
    {
        aumento = salario * 0.20;
        salarioNovo = salario + (salario * 0.20);

        printf("\nSeu cargo eh de Mestre de Obras\n");
        printf("Aumento de %.2f reais\nNovo salario de %.2f reais\n", aumento, salarioNovo);
    }
    else if (cargo == 4)
    {
        aumento = salario * 0.10;
        salarioNovo = salario + (salario * 0.10);

        printf("\nSeu cargo eh de Tecnico em Segurança\n");
        printf("Aumento de %.2f reais\nNovo salario de %.2f reais\n", aumento, salarioNovo);
    }
    else
    {
        printf("\nDesculpe, não temos cargo para esse código\n");
    }

    return 0;
}