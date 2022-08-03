#include <stdio.h>

int vogal_consoante(char caractere){
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || 
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    char caractere;
   
    printf("Digite o caractere: ");
    scanf("%c", &caractere);
   
    if(vogal_consoante(caractere)){
        printf("CONSOANTE\n");
    }
    else{
        printf("VOGAL\n");
    }
   
    return 0;
}