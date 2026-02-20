#include <stdio.h>
#include <stdlib.h>

int main()
{
    int E, M;
    float C, S;

    printf("****BIENVENIDO****\n");
    printf("***CALCULADORA DE PROMEDIO***\n");

    do {
        printf("\n1. Calcular promedio\n");
        printf("2. Salir\n");
        printf("Seleccione opcion 1 u opcion 2: ");
        scanf("%d", &E);

        if (E == 1 || E == 2)
        {
            if (E == 1)
            {
                S = 0;

                printf("Ingrese la cantidad de materias (numero entero): ");
                scanf("%d", &M);

                if (M >= 1)
                {
                    for (int i = 1; i <= M; i++)
                    {
                        printf("Ingrese la calificacion de la materia %d (0-100): ", i);
                        scanf("%f", &C);

                        if (C >= 0 && C <= 100)
                        {
                            S = S + C;
                        }
                        else
                        {
                            printf("Calificacion no valida.\n");
                            i--;  // Repite esa materia
                        }
                    }

                    printf("El promedio es: %.2f\n", S / M);
                }
                else
                {
                    printf("Numero de materias no valido.\n");
                }
            }
        }
        else
        {
            printf("Esa opcion no es valida. Solo se acepta 1 o 2.\n");
        }

    } while (E != 2);

    printf("Gracias por visitar esta calculadora de promedios\n");

    return 0;
}
