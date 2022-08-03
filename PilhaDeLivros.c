#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define qtd_livros 10

//A)
struct livros {
    int codigo;
    char titulo[60];
    char autor[35];
};

struct tpilha {
    struct livros dados[qtd_livros];
    int inicio, fim;
};

//B)
struct tpilha pilha;
int opcao;

void conteudo_pilha();
void empilhar();
void desempilhar();
void menu();

int main(){
    pilha.inicio =0;
    pilha.fim = 0;

    do {
        system("cls");
        conteudo_pilha();
        menu();

        printf("\nDigite uma das opcoes: ");
        scanf("%d", &opcao);
        
        switch (opcao){
        case 1: empilhar(); break;
        case 2: desempilhar(); break;
        }
    } while (opcao != 0);
    
    return 0;
}

//C)
void empilhar(){
    if (pilha.fim == qtd_livros) {
        printf("\nPILHA CHEIA\nIMPOSSIVEL EMPILHAR\n");
        system("pause");
    } 
    else {
        printf("Digite o codigo: ");
        scanf("%d", &pilha.dados[pilha.fim].codigo);
        fflush(stdin);
        printf("Digite o titulo: ");    
        gets(pilha.dados[pilha.fim].titulo);
        fflush(stdin);
        printf("Nome do autor: ");    
        gets(pilha.dados[pilha.fim].autor);
        pilha.fim ++;
    }
}

//D)
void desempilhar(){
    if (pilha.inicio == pilha.fim) {
        printf("\nPILHA VAZIA\nIMPOSSIVEL DESEMPILHAR\n");
        system("pause");
    }
    else {
        pilha.dados[pilha.fim - 1].codigo = 0;
        strcpy(pilha.dados[pilha.fim - 1].titulo, "");
        strcpy(pilha.dados[pilha.fim - 1].autor, "");
        pilha.fim --;
    }
}

//E)
void conteudo_pilha(){
    int i;
    printf("PILHA DE LIVROS:\n\n");
    for (i = 0; i < qtd_livros; i++) {
        printf("%d |\t", pilha.dados[i].codigo);
        printf("%s |\t", pilha.dados[i].titulo);
        printf("%s |\n", pilha.dados[i].autor);
    }
}

void menu(){
    printf("\nOPCOES: \n");
    printf("1 - ADICIONAR\n");
    printf("2 - REMOVER\n");
    printf("0 - SAIR\n");
}
