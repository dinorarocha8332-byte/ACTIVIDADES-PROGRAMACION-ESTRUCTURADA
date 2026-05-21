#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

void cuenta(int n) {
    if (n == 0)
        return;
    printf("%d\n", n);
    cuenta(n - 1);
}

void cambiar(int *x) {
    *x = 100;
}

void demo_punteros() {
    printf("=== PUNTEROS ===\n");
    int x = 5;
    int *p;
    p = &x;
    printf("x = %d\n", x);
    printf("p (direccion) = %p\n", p);
    printf("*p (valor) = %d\n", *p);
    *p = 20;
    printf("despues de *p = 20, x = %d\n", x);
}

void demo_paso_referencia() {
    printf("\n=== PASO POR REFERENCIA ===\n");
    int a = 5;
    printf("antes: a = %d\n", a);
    cambiar(&a);
    printf("despues de cambiar(&a): a = %d\n", a);
}

void demo_arreglos_punteros() {
    printf("\n=== ARREGLOS Y PUNTEROS ===\n");
    int v[5] = {10, 20, 30, 40, 50};
    printf("v[2] = %d\n", v[2]);
    printf("*(v+2) = %d\n", *(v + 2));
    printf("v == &v[0]: %s\n", v == &v[0] ? "verdadero" : "falso");
}

void demo_malloc() {
    printf("\n=== MALLOC Y FREE ===\n");
    int *v;
    v = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
        v[i] = (i + 1) * 10;
    for (int i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);
    free(v);
    printf("memoria liberada con free\n");
}

void demo_recursividad() {
    printf("\n=== RECURSIVIDAD ===\n");
    printf("factorial(5) = %d\n", factorial(5));
    printf("conteo regresivo desde 5:\n");
    cuenta(5);
}

int main() {
    demo_punteros();
    demo_paso_referencia();
    demo_arreglos_punteros();
    demo_malloc();
    demo_recursividad();
    return 0;
}
