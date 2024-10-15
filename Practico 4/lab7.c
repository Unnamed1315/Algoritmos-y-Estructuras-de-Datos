#include <stdio.h>
void pedir_arreglo(int n_max, int a[]) {
    int i;
    i=0;

    while (i<n_max) {
        printf("Ingrese el elemento %d del arreglo: \n", i);
        scanf("%d", &a[i]);
        i = i + 1;
    }
}

void imprimir_arreglo(int n_max, int a[]) {
    int i;
    i = 0;

    printf("El arreglo ingresado es:\n");
    while (i < n_max) {
        printf("El elemento %d es %d: \n", i, a[i]);
        i = i + 1;
    }
}

int main () {
    int tamaño;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño]; 

    pedir_arreglo(tamaño, arreglo); 
    imprimir_arreglo(tamaño, arreglo);
    return 0;
}