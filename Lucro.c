#include <stdio.h>
#define maximo_dias 50
#define MAX(A,B) ((A > B) ? (A) : (B))

int analise_lucro(int *lucros, int qtd_dias, int custoPorDia) {
    int maximo = 0;
    int maximoAteAqui = 0;
    int dia;

    for (dia = 0; dia < qtd_dias; dia++) {
        int lucro = lucros[dia] - custoPorDia;

        maximoAteAqui = MAX(0, maximoAteAqui + lucro);
        maximo = MAX(maximo, maximoAteAqui);
    }
    return maximo;
}

int main(){
    int dias, custo_dia;

    while (scanf("%d %d\n", &dias, &custo_dia) != EOF) {
        int lucro[maximo_dias];
        int i;

        for (i = 0; i < dias; i++) {
            scanf("%d\n", lucro + i);
        }
        printf("%d\n", analise_lucro(lucro, dias, custo_dia));
    }

    return 0;
}
