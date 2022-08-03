/*#include <stdio.h>
#include <string.h>

int main(){
    char L[500];
    int qntdCaracteres;

    gets(L);
                                                       //CORRETA
    qntdCaracteres = strlen(L);

    if(qntdCaracteres < 81){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main(){
    char L[500];
    int qntdCaracteres;

    scanf("%[^\n]", L); //ler um conjunto de caracteres
    qntdCaracteres = strlen(L);

    if(qntdCaracteres < 81){
     	printf("YES\n");
    }
    else{
     	printf("NO\n");
    }
	 
    return 0;
}