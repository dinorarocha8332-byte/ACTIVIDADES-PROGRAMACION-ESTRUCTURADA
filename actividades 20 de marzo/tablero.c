#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tablero [5][5];
    char nombre[20];
    char palabra_leida[20];
    FILE *archivo;

    archivo = fopen("tablero3.txt", "w");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            tablero[i][j]= '~';
            tablero[1][2]= 'B';
            tablero[3][4]= 'X';
            tablero[2][1]= '0';
            printf("%c", tablero[i][j]);
        }
        printf("\n");
    }

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    fprintf(archivo, "Dinora Marlen\n");
    fprintf(archivo, "%s\n", nombre);

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            fprintf(archivo, "%c", tablero[i][j]);
        }
        fprintf(archivo, "\n");
    }

    fclose(archivo);

    archivo = fopen("tablero3.txt", "r");

    while (fscanf(archivo, "%s", palabra_leida) != EOF) {
        if (strcmp(palabra_leida, nombre) == 0) {
            printf("\n El nombre '%s' si esta en el archivo.\n", palabra_leida);
            break;
        }
    }

    fclose(archivo);
    return 0;
}
