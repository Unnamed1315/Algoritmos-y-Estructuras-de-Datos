#include <stdio.h>
#include <limits.h>

int min(int a, int b){
    int res;

    if ( a >= b)
    {
        res = b;
    } else {
        res = a;
    };

    return res;
}

int minimo_pares(int tam, int a[]){
    int res, pos;
    res = INT_MAX;
    pos = 0;

    while (pos < tam)
    {   
        if (a[pos] % 2 == 0)
        {
            res = min(res, a[pos]);
        }      
        pos = pos + 1;
    }
    
    return res;
}

int minimo_impares(int tam, int a[]){
    int res, pos;
    res = INT_MAX;
    pos = 0;

    while (pos < tam)
    {   
        if (a[pos] % 2 == 1)
        {
            res = min(res, a[pos]);
        }      
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

int main(){
    int tamaño, min_par, min_impar, minimo;
    int arreglo[tamaño];

    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    pedir_arreglo(tamaño, arreglo);

    min_par = minimo_pares(tamaño, arreglo);
    min_impar = minimo_impares(tamaño, arreglo);
    minimo = min(min_par, min_impar);

    printf("El mínimo par es %d\n", min_par);
    printf("El mínimo impar es %d\n", min_impar);
    printf("El mínimo es %d\n", minimo);

    return 0;
}