#include <stdio.h>

unsigned long long contaDigitos(unsigned long long valor) {
    int resposta = 1;
    
    while(valor > 9) {
        resposta++;
        valor /= 10;
    }

   return resposta;
}

int main() {
    int n, m, x = 4, i, j, k;
    unsigned long long valor, maior, tamanho;
    scanf("%i", &n);

    while(n--) {
        scanf("%i", &m);
        unsigned long long matriz[m][m], maiores[m];
        maior = 0;

        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                scanf("%llu", &valor);
                matriz[i][j] = valor * valor;
            }
        }

        for (j = 0; j < m; j++) {
            for (i = 0; i < m; i++) {
                tamanho = contaDigitos(matriz[i][j]);
                
                if (maior < tamanho)
                    maior = tamanho;
            }
            
            maiores[j] = maior;
            maior = 0;
        }

        if (x != 4)
            printf("\n");

        printf("Quadrado da matriz #%i:\n", x++);

        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                for (k=0; k<maiores[j]-contaDigitos(matriz[i][j]); k++)
                    printf(" ");

                printf("%llu", matriz[i][j]);

                if (j < m - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}