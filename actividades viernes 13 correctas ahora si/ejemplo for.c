#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    int valor;
    int suma = 0;

    printf("¿Cuantos numeros deseas sumar? ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &valor);
        suma += valor;
    }

    printf("La suma total es: %d\n", suma);

    return 0;
}
