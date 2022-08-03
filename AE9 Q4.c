#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int *ponteiro;

    ponteiro = (int *) malloc(sizeof(int));
    return 0;
}

/*
Porque se tentarmos alocar em um endereço qualquer a um ponteiro, corremos o 
risco de alocar uma área da memória que está sendo utilizada pelo sistema operacional 
ou até mesmo outro programa, o que pode ocasionar instabilidade no computador. 
*/