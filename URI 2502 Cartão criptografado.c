#include <ctype.h>

#include <stdio.h>

#include <string.h>

int min(char c) {
    return (isupper(c)? 'a' + c  -'A'  : c);
}

int max(char c) {
    return (islower(c)? 'A' + c - 'a' : c);
}
int main() {
    
    int i, j, letras, palavras, cripto[1024];
	char antigo[50], novo[50], linha[1024];
	
	while (scanf("%d %d ", &letras, &palavras) != EOF) {
		
		for (i = 0; i < 1000; i++)
			cripto[i] = i;

		scanf("%[^\n]%*c", antigo);
		scanf("%[^\n]%*c", novo);
		
		for (i = 0 ; i < strlen(antigo); i++) {
			cripto[(int) antigo[i]] = max(novo[i]);
			if (isupper(antigo[i]))
				cripto['a' + antigo[i] - 'A'] = min(novo[i]);
			
			cripto[(int)novo[i]] = max(antigo[i]);
			if (isupper(novo[i]))
				cripto['a' + novo[i] - 'A'] = min(antigo[i]);
		}
		
		for (i = 0; i < palavras; i++) {
			scanf("%[^\n]%*c", linha);
			
			for (j = 0; j < strlen(linha); j++)
				printf("%c",(isupper(linha[j])? (char) max(cripto[(int) linha[j]]) : (char) min(cripto[(int) linha[j]])));
			printf("\n");
		}
		printf("\n");
	}	
	return 0;
}