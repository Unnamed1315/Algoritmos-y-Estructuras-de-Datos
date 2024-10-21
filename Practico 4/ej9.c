#include <stdio.h>
#include <stdbool.h>

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
    bool res;
    int tamaño, var_sum, pos;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño]; 

    pedir_arreglo(tamaño, arreglo);
    
    res = false;
    var_sum = 0;
    pos = 0;

    while (pos < tamaño)
    {
        res = res || var_sum == arreglo[pos];
        var_sum = var_sum + arreglo[pos];
        pos = pos + 1;
    }

    printf("res: %d \n", res);
    
    return 0;
}