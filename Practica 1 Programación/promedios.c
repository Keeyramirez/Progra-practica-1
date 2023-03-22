#include <stdio.h>

int main (){
    int cali1, cali2, cali3, cali4;
    int total; 

    float promedio;

    printf("Dame tu primera calificaciones\n");
    scanf("%d", &cali1);

    printf("Dame tu segunda calificacion\n");
    scanf("%d", &cali2);

    printf("Dame tu tercera calificacion\n");
    scanf("%d", &cali3);

    printf("Dame tu cuarta calificacion\n");
    scanf("%d", &cali4);

    total =cali1 + cali2 + cali3 + cali4;

    printf("La suma de calificaciones es: %d\n\n", total);

    promedio = (float)total/4;

    printf("Tu promedio de calificacion es: %f", promedio);
    if(promedio >=6) 
        printf("\n\n\t\rAprobado");
    else 
        printf("\n\n\t\tReprobado");


    return 0;
    

}