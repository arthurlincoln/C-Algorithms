/*#include <stdio.h>

int main(){
    int reps, num, primo = 0;
    scanf("%d", &reps);

    int i;
    for (i = 0; i < reps; i += 1)
    {
        scanf("%d", &reps);

        int j;
        for (j = 2; j < num; j += 1){
            if(num % j == 0){
                primo ++ ;
            }
        }

        if ((num == 1) || (num == 2)){
            printf ("%d eh primo\n", num);
        } 
        else if ((num > 2) && (primo == 0)){
            printf ("%d eh primo\n", num);
        }
        else {
            printf ("%d nao eh primo\n", num);
        }
    }

    return 0;
}*/

#include <stdio.h>

int main(){
    int vezes, num;
    
    printf("Digite a quantidade de testes: ");
    scanf("%d", &vezes);
    int i;
    for (i = 0; i < vezes; i++)
    {
        int div = 0;
        printf("Digite um numero: ");
        scanf("%d", &num);
        int j;
        for (j = 2; j < num; j++){
            if(num % j == 0){
                div++;
            }
        }

        if ((num == 1)||(num == 2)){
            printf("%d eh primo\n", num);
        }
        else if ((num > 2) && (div == 0)){
            printf("%d eh primo\n", num);
        }
        else {
            printf("%d nao eh primo\n", num);
        }
    }
    return 0;
}