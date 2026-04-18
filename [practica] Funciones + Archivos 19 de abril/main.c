#include <stdlib.h>
#include <stdio.h>

// 1. Capturar 6 numeros enteros y almacenarlos en un vector.
void capturar(int v[], int n) {
    int i;
    printf("\n--- Ingrese %d numeros ---\n", n);
    for (i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

// 2. Mostrar los numeros ingresados.
void mostrar(int v[], int n) {
    int i;
    printf("\nLos numeros ingresados son:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// 3. Filtrar los numeros pares y almacenarlos en otro vector.
// Note: (origen[i] % 2 == 0) finds even numbers.
int filtrarPares(int origen[], int destino[], int n) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (origen[i] % 2 == 0) { // Changed != to == for Even numbers
            destino[j] = origen[i];
            j++;
        }
    }
    return j; // Returns the count of even numbers found
}

int main() {
    int numeros[6];
    int pares[6];
    int cantidadPares;

    capturar(numeros, 6);
    mostrar(numeros, 6);

    cantidadPares = filtrarPares(numeros, pares, 6);

    printf("\nSe encontraron %d numeros pares.\n", cantidadPares);

    // File handling
    FILE *f;
    f = fopen("resultado.txt", "w");

    if (f == NULL) {
        printf("Error abriendo el archivo.");
        return 1;
    }

    fprintf(f, "Numeros pares filtrados:\n");
    for (int i = 0; i < cantidadPares; i++) {
        printf("Par %d: %d\n", i + 1, pares[i]); // Print to console
        fprintf(f, "%d ", pares[i]);            // Print to file
    }

    fclose(f);
    printf("\nLos resultados se han guardado en 'resultado.txt'\n");

    return 0;
}
