#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strcicmp(char const *a, char const *b){
    for (;; a++, b++) {
        int d = tolower(*a) - tolower(*b);
        if (d != 0 || !*a)
            return d;
    }
}

int compara(const void *a, const void *b){
    const char *s1 = (const char *) a;
    const char *s2 = (const char *) b;

    return strcicmp(s2, s1);
}

int main(){
    char criancas[1000][101];
    int numero = 0;

    while (fgets(criancas[numero], 101, stdin)){
        ++numero;
    }

    qsort(criancas, numero, 101, compara);

    printf("%s", criancas[0]);

    return 0;
}