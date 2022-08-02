#include <stdio.h>
#include <string.h>
#define tamanho 30

struct contato{
    char nome[40];
    char telefone[15];
    char email[50];
};

int main(){
    struct contato lista[tamanho];
    int opcao, i;

    opcao = 0;

    while (opcao != 3)
    {
        printf("DIGITE UMA DAS OPCOES: \n\n");
        printf("1 - CADASTRAR CONTATOS\n");
        printf("2 - APRESENTAR CONTATOS\n");
        printf("3 - ENCERRAR\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao){
        case 1:
            for ( i = 0; i < tamanho; i++){
                printf("Digite o nome do contato: ");
                scanf("%s", &lista[i].nome);
                printf("Digite o numero do telefone: ");
                scanf("%s", &lista[i].telefone);
                printf("Digite o email do contato: ");
                scanf("%s", &lista[i].email);
                printf("\n");
            }
            break;
        
        case 2:
            for ( i = 0; i < tamanho; i++)
            {
                printf("Nome = %s\n", lista[i].nome);
                printf("Telefone = %s\n", lista[i].telefone);
                printf("Email = %s\n", lista[i].email);
                printf("\n");
            }
        }
    }
    
    return 0;
}