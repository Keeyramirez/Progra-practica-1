#include <stdio.h>

int main(){
    int minutos, segundos, centecimos;
    int distancia;
    int total1;
    int total2;
    int total3;

    //¿Que distancia corren los deportistas?

    printf("\n\t Dame los minutos: ");
    scanf("%d", &minutos);

    printf("\n\t Dame los segundos: ");
    scanf("%d", &segundos);

    printf("\n\t Dame los centesimos: ");
    scanf("%d", &centecimos);

    total1 = minutos*60 + segundos + centecimos/100;
    printf("\n\t Tu tiempo en segundos es: %d", total1);

    printf("\n\t Dame la distancia que recorriste en metros:");
    scanf("%d", &distancia);

    total2 = distancia / minutos*60 + segundos + centecimos/100;

    printf("\n\t Tu velocidad en metros sobre segundo es: %d", total2);
    
    total3 = distancia /minutos*60 + segundos + centecimos/1000 * 3600 / 1000;

    printf("\n\t Tu velocidad dinal en kilimetros sobre hora es: %d", total3);


    return 0;


}