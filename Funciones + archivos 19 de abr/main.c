#include <stdlib.h>
#include <stdio.h>

// FUNCIONES

// 1. Capturar los 6 números
void capturar(int v[], int n) {
    printf("\n--- Registro de Datos (%d numeros) ---\n", n);
    for (int i = 0; i < n; i++) {
        printf("Ingrese el numero [%d]: ", i + 1);
        scanf("%d", &v[i]);
    }
}

// 2. Mostrar datos en pantalla
void mostrar(int v[], int n) {
    if (n == 0) {
        printf("Vacio");
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

// 3. Filtrar
int filtrar(int origen[], int destino[], int n, int opcion) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        int cumple = 0;

        switch(opcion) {
            case 1: // Eliminar pares
                if (origen[i] % 2 != 0) cumple = 1;
                break;
            case 2: // Eliminar multiplos de 3
                if (origen[i] % 3 != 0) cumple = 1;
                break;
            case 3: // Eliminar mayores a 10
                if (origen[i] <= 10) cumple = 1;
                break;
        }

        if (cumple) {
            destino[j] = origen[i];
            j++;
        }
    }
    return j;
}


void guardarReporte(int orig[], int nOrig, int filt[], int nFilt) {
    FILE *f = fopen("resultado.txt", "w");
    if (f == NULL) {
        printf("Error: No se pudo crear el archivo.\n");
        return;
    }

    fprintf(f, "--- REPORTE DE RESULTADOS ---\n");
    fprintf(f, "Arreglo Original: ");
    for (int i = 0; i < nOrig; i++) {
        fprintf(f, "%d ", orig[i]);
    }

    fprintf(f, "\nArreglo Filtrado: ");
    if (nFilt == 0) {
        fprintf(f, "Ningun elemento cumplio la condicion.");
    } else {
        for (int i = 0; i < nFilt; i++) {
            fprintf(f, "%d ", filt[i]);
        }
    }

    fclose(f);
    printf("\n[SISTEMA] Todo se ha guardado con exito en 'resultado.txt'\n");
}

// IMPLEMENTACION

int main() {
    int numeros[6];
    int filtrados[6];
    int cantidad, seleccion;


    capturar(numeros, 6);
    printf("\n--- MENU DE FILTRADO ---\n");
    printf("1. Eliminar numeros pares (quedar con impares)\n");
    printf("2. Eliminar multiplos de 3\n");
    printf("3. Eliminar numeros mayores a 10\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &seleccion);

    if (seleccion < 1 || seleccion > 3) {
        printf("Opcion invalida. Ejecucion terminada.\n");
        return 1;
    }

    cantidad = filtrar(numeros, filtrados, 6, seleccion);

    printf("\nArreglo original: ");
    mostrar(numeros, 6);

    printf("Arreglo filtrado: ");
    mostrar(filtrados, cantidad);


    guardarReporte(numeros, 6, filtrados, cantidad);

    return 0;
}
