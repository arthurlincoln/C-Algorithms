#include <stdio.h>

int main(){
    int idade, count = 0, sexo, solteiro = 0, casado = 0, separado = 0, viuvo = 0;
    float peso, mediaIdade, somaIdade, mediaPeso, somaPeso, estadoCivil;

    idade = -1;

    while (idade != 0 ){
        printf("Digite a idade (0 para parar): ");
        scanf("%d", &idade);

        if (idade != 0){
            printf("Digite o peso: ");
            scanf("%f", &peso);
            printf("Sexo [1] Masculino | [2] Feminino: ");
            scanf("%d", &sexo);
            printf("Digite o estado civil [1]CASADO | [2]SOLTEIRO | [3]SEPARADO |[4]VIUVO: ");
            scanf("%f", &estadoCivil);

            count ++;
            somaPeso += peso;
            somaIdade += idade;
            
            if (estadoCivil == 1){
                casado ++;
            }
            else if (estadoCivil == 2){
                solteiro ++;
            }
            else if (estadoCivil == 3){
                separado ++;
            }
            else if (estadoCivil == 4){
                viuvo ++;
            } 
            printf("\n");
        }
    }
    mediaIdade = somaIdade / count;
    mediaPeso = somaPeso / count;
    printf("\nMEDIA IDADE: %.1f anos\nMEDIA PESO: %.2f kgs\n", mediaIdade, mediaPeso); 
    printf("Casados: %d | Solteiros: %d | Separados: %d | Viuvos: %d\n", casado, solteiro, separado, viuvo); 
                   
    return 0;
}