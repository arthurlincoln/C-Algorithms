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
