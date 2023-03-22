#include <stdio.h>

int main(){
    int dato1, dato2;
    int total;
    int total2;

    printf("\n\t Escribe tu radio: ");
    scanf("%d", &dato1);

    total =dato1*dato1*3.1416;

    printf("\n\t La longitud de la frecuencia es: %d", total);

    printf("\n\t Escribe el radio de nuevo: ");
    scanf("%d", &dato2);

    total2 =dato2*2*3.1416;

    printf("\n\t El perimetro es: %d", total2);

    return 0;
}

