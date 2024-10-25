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

int prim_iguales(int tam, int a[]) {
    int res, pos;
    res = 1;
    pos = 0;
    // quiero que si el tamaño es 1 me de 1.
    
    while (a[pos] == a[pos+1])
    {   
        res = res + 1;
        pos = pos + 1;   
    }
    
    return res;
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

int main(){
    int tamaño, resultado;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño];

    pedir_arreglo(tamaño, arreglo);

    if (tamaño == 0)
    {
        resultado = 0;
    } else {
        resultado = prim_iguales(tamaño, arreglo);
    }

    printf("La longitud del tramo inicial más largo cuyos elementos son todos iguales es: %d\n",resultado);

    imprimir_arreglo(resultado, arreglo);

    return 0;
}