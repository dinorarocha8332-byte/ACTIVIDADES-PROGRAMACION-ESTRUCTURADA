#include <stdio.h>
#include <stdlib.h>

int main()
{
    int E;              // Opcion del primer menu
    int opcion;         // Opcion del menu de comida
    int total = 0;      // Total a pagar

    do{
        printf("\n¿Desea comprar comida?\n");
        printf("1. Continuar\n");
        printf("2. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &E);

        if (E == 1)
        {
            do{
                printf("\n--- MENU ---\n");//Menu comida
                printf("1. Pasta Alfredo $120\n");
                printf("2. Ensalada $80\n");
                printf("3. Pizza $100\n");
                printf("4. Salir\n");
                printf("Elige una opcion: ");
                scanf("%d", &opcion);

                if(opcion >= 1 && opcion <= 3)
                {
                    if(opcion == 1)
                        total += 120;
                    else if(opcion == 2)
                        total += 80;
                    else if(opcion == 3)
                        total += 100;

                    printf("Producto agregado. Total actual: $%d\n", total);
                }
                else if(opcion != 4)
                {
                    printf("Opcion no valida\n");
                }

            }while(opcion != 4);

            printf("\nTotal a pagar: $%d\n", total);
        }

    }while(E != 2);

    printf("Gracias por su compra\n");

    return 0;
}
