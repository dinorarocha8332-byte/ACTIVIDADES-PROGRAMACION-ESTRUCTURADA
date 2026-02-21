#include <stdio.h>
#include <stdlib.h>

int main()
{
    int E, M;
    int aprobadas, reprobadas;
    float C, S;
    float porcAprobadas, porcReprobadas;

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
                aprobadas = 0;
                reprobadas = 0;

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
                            S += C;

                            if (C >= 60)
                                aprobadas++;
                            else
                                reprobadas++;
                        }
                        else
                        {
                            printf("Calificacion no valida.\n");
                            i--;
                        }
                    }

                    porcAprobadas = (aprobadas * 100.0) / M;
                    porcReprobadas = (reprobadas * 100.0) / M;

                    printf("\nPromedio final: %.2f\n", S / M);
                    printf("Materias aprobadas: %d (%.2f%%)\n", aprobadas, porcAprobadas);
                    printf("Materias reprobadas: %d (%.2f%%)\n", reprobadas, porcReprobadas);
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
