#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int i;
    int esPrimo = 1;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("El numero es PAR\n");
    } else {
        printf("El numero es IMPAR\n");
    }

    if (num <= 1) {
        esPrimo = 0;
    } else {
        i = 2;
        while (i <= num / 2 && esPrimo == 1) {
            if (num % i == 0) {
                esPrimo = 0;
            }
            i++;
        }
    }

    if (esPrimo == 1) {
        printf("El numero es PRIMO\n");
    } else {
        printf("El numero NO es primo\n");
    }

    return 0;
}

