/*#include <stdio.h>

int main(){
    double num;

    scanf("%lf", &num);
    printf("%+.4LE\n", num); //sinal de + para identificar o valor a notação negativa e positiva

    return 0;
}*/

#include <stdio.h>

int main(){
    double num;

    scanf("%lf", &num);
    printf("%+.4E\n", num);
    return 0;
}