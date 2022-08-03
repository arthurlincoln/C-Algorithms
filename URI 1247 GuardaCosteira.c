#include <stdio.h>
#include <math.h>
 
int main() {
 
    int D, VF, VG;
    double tempoFugitivo, tempoGuarda,distanciaFugitivo, distanciaGuarda;
    
    while(scanf("%d %d %d", &D, &VF ,&VG) != EOF){
        
        distanciaFugitivo = 12.0;
        distanciaGuarda = sqrt((distanciaFugitivo*distanciaFugitivo)+(D*D));


        tempoFugitivo = (distanciaFugitivo / VF);
        tempoGuarda   = (distanciaGuarda / VG);

        if (tempoGuarda <= tempoFugitivo){
            printf("N\n");
        } else {
            printf("S\n");
        }
    }
    return 0;
}

/*#include <stdio.h>
#include <math.h>

int main(){
    int D, VF, VG;
    double d;

    while(scanf("%d %d %d", &D, &VF, &VG) > 0){
        d = sqrt(pow(12.0, 2.0) + pow(D, 2.0));

        if((12.0 / VF) >= (d / VG)){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
 }

    return 0;
}*/