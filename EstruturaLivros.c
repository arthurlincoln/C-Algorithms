#include<stdio.h>
#include<string.h>
#define qtdLivros 20

struct livro{
    char titulo[50];
    char autor[30];
    char ano[4];
    char editora[20];
    char edicao[4];
};

int main(){
    struct livro ficha[qtdLivros];
    int i, opcao;

    opcao = 0;
    while (opcao != 3)
    {
        printf("DIGITE UMA DAS OPCOES: \n\n");
        printf("1 - CADASTRAR LIVROS\n");
        printf("2 - IMPRIMIR INFORMACOES DOS LIVROS \n");
        printf("3 - ENCERRAR:\n");

        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        printf("\n");
        
        switch (opcao)
        {
        case 1:
            for (i = 0; i < qtdLivros; i++){
                printf("Digite o titulo do livro: ");
                scanf("%s", ficha[i].titulo);
                printf("Digite o nome do autor: ");
                scanf("%s", ficha[i].autor);
                printf("Digite o ano: ");
                scanf("%s", ficha[i].ano);
                printf("Digite o editora: ");
                scanf("%s", ficha[i].editora);
                printf("Digite a edicao: ");
                scanf("%s", ficha[i].edicao);
                printf("\n");
            }
            break;
        
        case 2:
            for ( i = 0; i < qtdLivros; i++){
                printf("Titulo do livro: %s\n", ficha[i].titulo);
                printf("Nome do autor: %s\n", ficha[i].autor);
                printf("Ano: %s\n", ficha[i].ano);
                printf("Editora: %s\n", ficha[i].editora);
                printf("Edicao: %s\n\n", ficha[i].edicao);
            }  
            break;
        }
    }

    return 0;
}
