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

int max(int a, int b) {
    if (a >= b)
    {
        return a;
    } else 
    {
        return b;
    }
}

int sumatoria (int inicio,int tam, int a[]) {
    int res, pos, n;
    n = tam;
    res = 0;
    pos = inicio;

    while (pos < tam)
    {
        res = a[pos] + res;
        pos = pos + 1;
    }
    return res;
    
}

int main () {
    int tamaño, r, r2,  n, m;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño]; 

    pedir_arreglo(tamaño, arreglo);
    
    r = 0;
    r2 = 0;
    n = 0;
    while (n < tamaño)
    {
        r = max (r, max(r2 + arreglo[n],0));
        r2 = max(r2 + arreglo[n],0);
        n= n+1;
    }
    
    printf("res: %d \n", r);
    return 0;
}
