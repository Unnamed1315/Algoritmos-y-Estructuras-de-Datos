int sumatoria (int tam, int a[]) {
    int res, pos, n;
    n = tam;
    res = 0;
    pos = 0;

    while (pos < tam)
    {
        res = a[pos] + res;
        pos = pos + 1;
    }
    return res;
    
}

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

int main () {
    int tamaño;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño]; 

    pedir_arreglo(tamaño, arreglo);
    printf("La sumatoria de los elementos del arreglo es %d\n",sumatoria(tamaño, arreglo));
    return 0;
}