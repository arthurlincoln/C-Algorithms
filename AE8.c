#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define qtd_clientes 10

//A)
struct cliente{
    char nome[45];
    char hora[5];
};

struct estrutura_fila{
    struct cliente dados[qtd_clientes];
    int inicio;
    int fim;
};

//B)
struct estrutura_fila fila;
int opcao;

void conteudo_fila();
void enfileirar();
void desenfileirar();
void menu_fila();

int main(){
    fila.inicio = 0;
    fila.fim = 0;

    do {
        system("cls");
        conteudo_fila();
        menu_fila();

        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1: enfileirar(); break;
        case 2: desenfileirar(); break;
        }
    } while (opcao != 0);
    
    return 0;
}

//C)
void enfileirar(){
    if (fila.fim == qtd_clientes) {
        printf("\nFILA CHEIA\nAGUARDE...\n");
        system("pause");
    } 
    else {
        fflush(stdin);
        printf("\nInforme o nome do cliente: ");    
        gets(fila.dados[fila.fim].nome);
        printf("Informe o horario de chegada: ");    
        gets(fila.dados[fila.fim].hora);
        fila.fim ++;
    }
}

//D)
void desenfileirar(){
    if (fila.inicio == fila.fim) {
        printf("\nFILA VAZIA\nSERA ATENDIDO AGORA\n");
        system("pause");
    }
    else {
        int i;
        for (i = 0; i < qtd_clientes; i++) {
            strcpy(fila.dados[i].nome, fila.dados[i+1].nome);
            strcpy(fila.dados[i].hora, fila.dados[i+1].hora);
        }
        strcpy(fila.dados[fila.fim].nome, "");
        strcpy(fila.dados[fila.fim].hora, "");
        fila.fim --;
    }
}

//E)
void conteudo_fila(){
    int i;
    printf("FILA - MAXIMO DE %d PESSOAS:\n\n", qtd_clientes);

    for (i = 0; i < qtd_clientes; i++) {
        printf("%d na fila  - ", i + 1);
        printf("Nome: %s\t", fila.dados[i].nome);
        printf("\tHorario de chegada: %s\n", fila.dados[i].hora);
    }
    printf("\n");
}

void menu_fila(){
    printf("\nOPCOES PARA FILA:\n");
    printf("\n1 - ADICIONAR CLIENTE\n");
    printf("2 - REMOVER CLIENTE\n");
    printf("0 - SAIR\n");
}