#include <stdio.h>
#include <stdlib.h>

int main()
{
    int E;
    printf("Ingresa tu edad:");
    scanf("%d", &E);
    if( E >= 18){
        printf("Eres mayor de edad\n ");
    }
    else
        {
            printf("Aun no eres mayor de edad\n");
        }

    return 0;
}
