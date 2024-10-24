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
    int tamaño, r, r2,  n, m;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño]; 

    pedir_arreglo(tamaño, arreglo);
    
    r = 0;
    m = 0;
    while (m != tamaño)
    {
        r2 = 0;
        n = 0;
        while (n != m)
        {
            if (arreglo[n]*arreglo[(n+1)]>=0)
            {
            r2 = r2 + 1;        
            }
            n = n + 1;
        }
        r = r + r2;
        m = m + 1;
    }
    
    printf("res: %d \n", r);
    return 0;
}