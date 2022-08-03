/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int casos, i;
    char placa[100];

    scanf("%d", &casos);

    for ( i = 0; i < casos; i++){
        scanf("%c", placa);
        
        if(!(strlen(placa) == 8 && isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && placa[3] == "-" && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]))){
            printf("FAILURE\n");
        }
        else{
            //pode fazer com switch também
            if (placa[7] == '1' || placa[7] == '2'){
                printf("MONDAY\n");
            }
            else if (placa[7] == '3' || placa[7] == '4'){
                printf("TUESDAY\n");
            }
            else if(placa[7] == '5' || placa[7] == '6'){
                printf("WEDNESDAY");
            }
            else if(placa[7] == '7' || placa[7] == '8'){
                printf("THURSDAY\n");
            }
            else if(placa[7] == '9' || placa[7] == '0'){
                printf("FRIDAY\n");
            }
        }
    }

    return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int casos;
    char placa[100];

    scanf("%d ", &casos);
    
    while (casos --) {
        scanf ("%[^\n]%*c", placa);
        
        if (!(strlen(placa) == 8 && isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7]))){
            printf("FAILURE\n");
        }
        else{
            switch (placa[7]){
                case '1':
                case '2':
                    printf("MONDAY\n");
                    break;
                case '3':
                case '4':
                    printf("TUESDAY\n");
                    break;
                case '5':
                case '6':
                    printf("WEDNESDAY\n");
                    break;
                case '7':
                case '8':
                    printf("THURSDAY\n");
                    break;
                case '9':
                case '0':
                    printf("FRIDAY\n");
                    break;
            }
        }
    }
    
    return 0;
}