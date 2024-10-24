#include <stdio.h>
#include <stdbool.h>

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

bool todos_pares(int tam, int a[]) {
    bool res;
    int pos;

    res = true;
    pos = 0;

    while (pos < tam)
    {
        res = res && (a[pos] % 2 == 0);
        pos = pos + 1;
    }
    
    return res;
}

bool existe_multiplo(int m, int tam, int a[]) {
    bool res;
    int pos;

    res = false;
    pos = 0;
    while (pos < tam)
    {
        res = res || (a[pos] % m == 0);
        pos = pos + 1;
    }
    
    return res;
}

int main(){
    int tamaño,m,opcion;
    bool res;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño];
    
    pedir_arreglo(tamaño, arreglo);

    while (!(opcion == 1 || opcion == 2) )
    {
        printf("Por favor, elija una función\n 1. todos_pares.\n 2. existe_multiplo\n");
        scanf("%d", &opcion);
    }

    if (opcion == 1)
    {
        res = todos_pares(tamaño, arreglo);
    } else {
        printf("Por favor, ingrese el multiplo m\n");
        scanf("%d", &m);
        res = existe_multiplo(m, tamaño, arreglo);
    }

    if (res == true)
    {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
    
}