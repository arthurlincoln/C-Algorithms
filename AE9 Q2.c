#include <stdio.h>
#include <stdlib.h>

struct semaforo {
    char cor[15];
    int id;
};

struct semaforo s1 = {"Vermelho", 1};
struct semaforo s2 = {"Amarelo", 2};
struct semaforo s3 = {"Verde", 3};
struct semaforo *ponteiro_semaforo;

int main(){
    system("cls");
    ponteiro_semaforo = &s1;
    int i;
    
    for (i = 0; i < 3; i++){
        printf("%d - %s\n", (*ponteiro_semaforo).id, (*ponteiro_semaforo).cor);
        ponteiro_semaforo += 1;
    }

    return 0;
}