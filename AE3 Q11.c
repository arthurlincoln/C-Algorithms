/*#include <stdio.h>

int main(){
    int num, num_primo = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    int i;
    for ( i = 1; i <= num; i++)
    {
        if (num % i == 0){
            num_primo += 1;
        }
        else{
            num_primo += 0;
        }
        
    }
    if (num_primo == 2){
        printf("O numero %d eh primo\n", num);
    }
    else{
        printf("O numero %d nao eh primo\n", num);
    }
    
    return 0;
}*/
#include <stdio.h>
 
int main(){
    int num, i, primo = 0;
 
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 1){
        for (i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0){
            primo += 1;
            }
        }
    
        if (primo == 0){
            printf("%d eh primo\n", num);
        }
        else{
            printf("%d nao eh primo\n", num);
        } 
    }
    return 0;
}