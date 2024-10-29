#include <stdio.h>

void intercambiar(int tam, int a[], int i, int j) {
    int elem1, elem2;
    elem1 =a[i]; 
    elem2 =a[j];
    a[i]=elem2;
    a[j]=elem1;
}

void pedir_arreglo(int n_max, int a[]) {
    int i = 0;

    while (i<n_max) {
        printf("Ingrese el elemento %d del arreglo: \n", i);
        scanf("%d", &a[i]);
        i++;
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



int main() {
    int tamaño,i,j;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño];
    pedir_arreglo(tamaño, arreglo); 
    printf("Por favor, ingrese la primera posición a intercambiar\n");
    scanf("%d", &i);
    printf("Por favor, ingrese la segunda posición a intercambiar\n");
    scanf("%d", &j);

    if (i <= tamaño && j<= tamaño)
    {
        intercambiar(tamaño, arreglo,i,j);
    } else {

    }
    imprimir_arreglo(tamaño, arreglo);
    
    return 0;
}