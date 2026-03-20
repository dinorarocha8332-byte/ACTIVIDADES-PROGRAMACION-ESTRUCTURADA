#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char Nombre[4][20];
    char ArregloC[5];
    char numeros[5];
    int i;


    for(i = 0; i < 4; i++) {
        if(i == 0) printf("Ingresa tu primer nombre: ");
        if(i == 1) printf("Ingresa tu segundo nombre: ");
        if(i == 2) printf("Ingresa tu apellido paterno: ");
        if(i == 3) printf("Ingresa tu apellido materno: ");
        scanf("%s", Nombre[i]);
    }

    printf("\n\n--------------------------------\n");
    printf("Tu nombre completo es: %s %s %s %s\n", Nombre[0], Nombre[1], Nombre[2], Nombre[3]);

    printf("\nDirecciones de memoria:\n");
    printf("%d %d %d %d", &Nombre[0], &Nombre[1], &Nombre[2], &Nombre[3]);

    printf("\n\nDireccion de memoria base (Matriz Nombre): %d\n", &Nombre);

    printf("\n__________________________________________________________________________________\n");
    printf("Direcciones de ArregloC:\n");
    printf("%d %d %d %d %d\n", &ArregloC[0], &ArregloC[1], &ArregloC[2], &ArregloC[3], &ArregloC[4]);
    printf("Base ArregloC: %d\n\n", ArregloC);


     for(i = 0; i < 5; i++) {
        if(i == 0) printf("Ingresa el primer numero: ");
        if(i == 1) printf("Ingresa el segundo numero: ");
        if(i == 2) printf("Ingresa el tercer numero: ");
        if(i == 3) printf("Ingresa el cuarto numero: ");
        if(i == 4) printf("Ingresa el quinto numero: ");
        scanf("%s", numeros[i]);
    }

    printf("\Las direcciones de los numeros son :%d %d %d %d %d\n", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]);
    printf("\n__________________________________________________________________________________\n");


    return 0;
}
