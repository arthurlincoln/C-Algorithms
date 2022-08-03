#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

long casas[45100];
long cartas[45100];

int busca(long *casas, long tam, long chave){
    int hi, low, mid;

    hi = tam; low = 1;

    while (low <= hi){
        mid = (low + hi) / 2;

        if (chave < casas[mid]){
            hi = mid - 1;
        }
        else if (chave > casas[mid]){
            low = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    long tmp;
    long i, x, z;
    long N, m, tempo;

    scanf("%ld %ld", &N, &m);

    for (i = 1; i <= N; ++i)
        scanf("%ld", &casas[i]);

    z = 1;
    tempo = 0;
    for (i = 1; i <= m; ++i){
        scanf("%ld", &tmp);
        
        x = busca(casas, N, tmp);
        tempo += abs(x - z);
        z = x;
    }
    printf("%ld\n", tempo);
    return 0;
}