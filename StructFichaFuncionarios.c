#include <stdio.h>
#include <string.h>
#define quantidade 20

struct funcionarios{
    char nome[30];
    char matricula[10];
    char setor[20];
    float salario;
};

int main(){
    struct funcionarios ficha[quantidade];
    int i, consultas, opcao;
    char matriculaBusca[10];

    opcao = 0;
    while (opcao != 3){
        printf("DIGITE UMA DAS OPCOES: \n");
        printf("1 - CADASTRAR FUNCIONARIOS\n");
        printf("2 - BUSCAR FUNCIONARIO POR MATRICULA\n");
        printf("3 - ENCERRAR\n");
        
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            for( i = 0; i < quantidade; i++){
                printf("Digite o nome do funcionario: ");
                scanf("%s", &ficha[i].nome);
                printf("Digite a matricula: ");
                scanf("%s", &ficha[i].matricula);
                printf("Digite o setor: ");
                scanf("%s", &ficha[i].setor);
                printf("Informe o salario: ");
                scanf("%f", &ficha[i].salario);
                printf("\n");
            }
            break;
        
        case 2:
            printf("\nDigite a quantidade de consultas: ");
            scanf("%d", &consultas);
            printf("\n");
            while(consultas --){
                printf("Digite a matricula do funcionario: ");
                scanf("%s", &matriculaBusca);
                
                i = 0;
                int find = 0;

                while (i < quantidade && find == 0){
                    if (strcmp(ficha[i].matricula, matriculaBusca) == 0 ){
                        find = 1;
                    }
                    else{
                        i++;
                    }
                }
                if (find == 1){
                    printf("Nome = %s\n", ficha[i].nome);
                    printf("Setor = %s\n", ficha[i].setor);
                    printf("Salario = R$ %.2f\n", ficha[i].salario);
                    printf("\n");
                }
                else{
                    printf("DESCULPE! Matricula nao cadastrada\n\n");
                }
            }
            break;
        }
    }
    
    return 0;
}
