#include <stdio.h>
#include <string.h>
#define turma 20

struct alunos{
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
};

int main(){
    struct alunos info[turma];
    int opcao, i;
    float acumuloMedias, mediaTurma;

    opcao = 0;
    while (opcao != 3){
        printf("DIGITE UMA DAS OPCOES: \n");
        printf("1 - ARQUIVAR NOTAS E MEDIA DOS ALUNOS\n");
        printf("2 - MEDIA DA TURMA\n");
        printf("3 - ENCERRAR\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao){
        case 1:
            for (i = 0; i < turma; i++){
                printf("Digite o nome do aluno: ");
                scanf("%s", &info[i].nome);
                printf("Digite a nota 1 do aluno: ");
                scanf("%f", &info[i].nota1);
                printf("Digite a nota 2 do aluno: ");
                scanf("%f", &info[i].nota2);
                printf("Digite a nota 3 do aluno: ");
                scanf("%f", &info[i].nota3);
                printf("Digite a nota 4 do aluno: ");
                scanf("%f", &info[i].nota4);
                printf("\n");

                info[i].media = (info[i].nota1 + info[i].nota2 + info[i].nota3 + info[i].nota4) / 4;
                printf("Media do aluno %s = %.2f\n", info[i].nome, info[i].media);
                acumuloMedias += info[i].media;
                printf("\n");
            }
            break;

        case 2:
            mediaTurma = acumuloMedias / turma;
            printf("MEDIA DA TURMA = %.2f\n\n", mediaTurma);
            break;
        }
    }

    return 0;
}