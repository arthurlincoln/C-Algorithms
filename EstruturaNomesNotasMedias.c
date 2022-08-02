#include <stdio.h>
#include <string.h>
#define qtdAlunos 5

struct alunos{
    char nome[30];
    float bimestre1;
    float bimestre2;
    float bimestre3;
    float bimestre4;
    float media;
};

int main(){
    struct alunos notas[qtdAlunos];
    struct alunos auxiliar;
    int i, j, opcao;
    float acumuloMedia = 0, mediaAlunos;

    opcao = 0;

    while (opcao != 4){
        printf("OPCOES: \n\n");
        printf("1 - ARQUIVAR NOMES, NOTAS E MEDIAS\n");
        printf("2 - MOSTRAR MEDIA DA TURMA\n");
        printf("3 - ORDENAR OS NOMES DOS ALUNOS POR MEDIA\n");
        printf("4 - ENCERRAR\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao){
        case 1:
            for (i = 0; i < qtdAlunos; i++){
                printf("Digite o nome do aluno: ");
                scanf("%s", &notas[i].nome);
                printf("Digite a nota bimestre 1: ");
                scanf("%f", &notas[i].bimestre1);
                printf("Digite a nota bimestre 2: ");
                scanf("%f", &notas[i].bimestre2);
                printf("Digite a nota bimestre 3: ");
                scanf("%f", &notas[i].bimestre3);
                printf("Digite a nota bimestre 4: ");
                scanf("%f", &notas[i].bimestre4);

                notas[i].media = (notas[i].bimestre1 + notas[i].bimestre2 + notas[i].bimestre3 + notas[i].bimestre4) / 4;

                printf("Media do aluno %s: %.1f\n", notas[i].nome, notas[i].media);
                acumuloMedia += notas[i].media;
                printf("\n");
            }  
            break;
        
        case 2:
            mediaAlunos = acumuloMedia / qtdAlunos;
            printf("Media da turma: %.1f\n", mediaAlunos);
            printf("\n");
            break;

        case 3:
            //ORGANIZAÇÃO DAS MÉDIAS 
            for (i = 0; i < qtdAlunos - 1; i++){
                for (j = i + 1; j < qtdAlunos; j++){
                    if (notas[i].media > notas[j].media){
                        auxiliar = notas[i];
                        notas[i] = notas[j];
                        notas[j] = auxiliar;
                    }
                }    
            }
            printf("\nMEDIAS POR ORDEM CRESCENTE: \n\n");
            for (i = 0; i < qtdAlunos; i++){
                printf("NOME: %s\tMEDIA: %.1f\n", notas[i].nome, notas[i].media);
            }
            printf("\n");
            break;
        }
    }
    
    return 0;
}
