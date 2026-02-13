#include <stdio.h>
#include <stdlib.h>

int main()
{
    int E,M;
    float P;


    printf("Ingresa tu edad:");
    scanf("%d", &E);

    printf("Ingresa tu promedio actual: \n");
    scanf("%f", &P);

    printf("Ingresa la cantidad de materias reprobadas: \n");
    scanf("%d", &M);



    if (P >= 90.0 && M == 0){
        printf("FELICIDADES obtuviste la beca");

    }

    else{

       if (M <= 2){
        printf("Puedes reinscribirte para obtener la beca\n");

    }

    else{
        printf("Estas en situacion critica\n");
    }
    }


    return 0;
}
