#include <stdio.h>

int main()
{
    int x;
    int suma = 0;

    printf("Ingresa numeros (0 para terminar): ");
    scanf("%d", &x);

    while (x != 0) {
        suma += x;                 // Acumula el numero en la suma
        printf("Suma actual: %d\n", suma);  // Muestra la suma
        scanf("%d", &x);           // Pide otro numero
    }

    printf("Suma final: %d\n", suma);

    return 0;
}
