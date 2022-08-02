#include <stdio.h>

int main(){
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if ((idade >= 16 && idade < 18) || idade >= 65){
        printf("Eleitor facultativo");
    }
    else if (idade < 16){
       printf("Nao eleitor");
    }
    else{
        printf("Eleitor obrigatorio");
    }
    
    return 0;
}
