#include <stdio.h>
#include <float.h>

void pedir_arreglo(int n_max, float a[]) {
    int i;
    i=0;

    while (i<n_max) {
        printf("Ingrese el elemento %d del arreglo: \n", i);
        scanf("%f", &a[i]);
        i = i + 1;
    }
}

struct datos_t {    
    float maximo;
    float minimo;
    float promedio;
};

float min(float a, float b){
    int res;

    if ( a > b)
    {
        res = b;
    } else {
        res = a;
    };

    return res;
}

float max(float a, float b){
    float res;

    if ( a < b)
    {
        res = b;
    } else {
        res = a;
    };

    return res;
}

struct datos_t stats(int tam, float a[]) {
    struct datos_t datos;
    int pos;
    float sum;

    datos.maximo= FLT_MIN;
    datos.minimo= FLT_MAX;
    sum = 0;
    pos = 0;

    while (pos < tam) {
        datos.maximo= max(datos.maximo,a[pos]);
        datos.minimo= min(datos.minimo,a[pos]);
        sum = a[pos] + sum;
        pos = pos + 1;
    }
    
    datos.promedio = sum / tam;

    return datos;
}

void imprime_resultado (struct datos_t d){
    printf("El máximo del arreglo es %f.\n",d.maximo);
    printf("El mínimo del arreglo es %f.\n",d.minimo);
    printf("El promedio del arreglo es %f.\n",d.promedio); 
}

int main(){
    int tamaño;
    tamaño = -1;
    while (tamaño <= 0)
    {
        printf("Por favor, ingrese un número positivo para el tamaño del arreglo.\n");
        scanf("%d", &tamaño);
    }
    float arreglo[tamaño];

    pedir_arreglo(tamaño, arreglo);

    imprime_resultado(stats(tamaño, arreglo));

    return 0;
}