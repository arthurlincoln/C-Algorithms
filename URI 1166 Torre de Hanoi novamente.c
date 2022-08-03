#include <stdio.h>
#include <math.h>

int main(){
    int entrada, hastes, i, j, x = 0, aux2, aux3;
    float aux, aux4;

    scanf("%d", &entrada);

    while(x < entrada) {

        scanf("%d", &hastes);

        int varetas[50];
        int count = 1;

        for (i = 0; i < hastes; i++) {
            varetas[i] = 0;
        }
        
        for (i = 0; i <= hastes; i++) {
            aux3 = 0;

            again:
            for (j = 0; j < hastes; j++) {
                aux = (float)sqrt(varetas[j] + count);
                aux2 = aux;
                aux4 = aux2;
                if (aux4 - aux == 0 && aux > 1) {
                    varetas[j] = count;
                    aux3 = aux3 + 1;
                    count ++;
                    goto again;
                }
            }
            for (j = 0; j < hastes; j++) {
                if (varetas[j] == 0) {
                    varetas[j] = count;
                    aux3 = aux3 + 1;
                    count ++;
                    break;
                }
            }
            if (aux3 == 0) {
                break;
            }
            if (i == hastes) {
                i = 0;
            }
        }
        printf("%d\n", count - 1);
        x++;
    }
    return 0;
}