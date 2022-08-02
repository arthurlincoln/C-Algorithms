#include <stdio.h>

int main(){
    int idade, sexo, estadoCivil, count = 0 , somaIdade = 0, somaPeso = 0;
    int casadas = 0, solteiras = 0, viuvas = 0, separadas = 0; 
    float peso, mediaIdade, mediaPeso;

    printf("Digite a idade (0 para parar): ");
    scanf("%d", &idade);
    somaIdade += idade;

    while (idade != 0){
        printf("Digite o peso: ");
        scanf("%f", &peso);
        somaPeso += peso;

        printf("Digite o sexo [1]MASCULINO | [2]FEMININO : ");
        scanf("%d", &sexo);
        
        printf("Digite o estado civil [1]CASADO | [2]SOLTEIRO | [3]SEPARADO | [4]VIUVO: ");
        scanf("%s", &estadoCivil);
        
        if (estadoCivil == 1){
            casadas += 1;
        }
        else if (estadoCivil == 2){
            solteiras += 1;
        }
        else if (estadoCivil == 3){
            separadas += 1;
        }
        else if (estadoCivil == 4){
            viuvas += 1;
        }
        count ++;
        printf("\nDigite a idade (0 para parar): ");
        scanf("%d", &idade);
        somaIdade += idade;
    }
    mediaIdade = somaIdade / count;
    mediaPeso = somaPeso / count;

    printf("A media de idade eh de %.1f\n", mediaIdade);
    printf("A media de peso eh %.2f kgs\n", mediaPeso);
    printf("Foram contadas: %d pessoas casadas, %d solteiras, %d separadas e %d viuvas\n", casadas, solteiras, separadas, viuvas);
    return 0; 
}
