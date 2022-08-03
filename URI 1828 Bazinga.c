#include <stdio.h>
#include <string.h>

int main(){
    int testes, count = 0;
    char sheldon[10], raj[10];

    //printf("Digite a quantidade de testes: ");
    scanf("%d", &testes);

    int i;
    for ( i = 0; i < testes; i++){

        count ++;
        scanf("%s %s", sheldon, raj);

        if (strcmp(sheldon, raj) == 0){
            printf("Caso #%d: De novo!\n", count);
        }
        else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "papel") == 00 && strcmp(raj, "Spock") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0){
            printf("Caso #%d: Bazinga!\n", count);
        }
        else{
            printf("Caso #%d: Raj trapaceou!\n", count);
        }
    }
    return 0;
}