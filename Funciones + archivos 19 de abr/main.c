#include <stdlib.h>
#include <stdio.h>

// --- FUNCIONES ---

// 1. Capturar 6 numeros enteros y almacenarlos en un vector.
void capturar(int v[], int n) {
    int i;
    printf("--- Ingrese %d numeros ---\n", n);
    for (i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

// 2. Mostrar los numeros ingresados.
void mostrar(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// 3. Filtrar los numeros NO pares (Impares) y almacenarlos en otro vector.
int filtrar(int origen[], int destino[], int n) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        // Condicion: Si el residuo no es 0, es impar
        if (origen[i] % 2 != 0) {
            destino[j] = origen[i];
            j++;
        }
    }
    return j; // Retorna la cantidad de impares encontrados
}

// --- IMPLEMENTACION ---

int main() {
    int numeros[6];
    int impares[6];
    int cantidad;

    // Ejecucion de funciones
    capturar(numeros, 6);

    printf("\nArreglo original:\n");
    mostrar(numeros, 6);

    cantidad = filtrar(numeros, impares, 6);

    printf("\nArreglo filtrado (Impares):\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    // 4. Guardar resultado en archivo
    FILE *f;
    f = fopen("resultado.txt", "w");

    if (f == NULL) {
        printf("Error al crear el archivo.\n");
        return 1;
    }

    for (int i = 0; i < cantidad; i++) {
        fprintf(f, "%d ", impares[i]);
    }

    fclose(f);
    printf("\nResultado guardado con exito en 'resultado.txt'\n");

    return 0;
}
