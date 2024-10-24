#include <stdio.h>

int pedir_entero(char name) {
    int valor;

    printf("Por favor, ingrese un valor para la variable '%c':\n", name);
    scanf("%d", &valor);

    return valor;
}

void imprimir_entero (char name, int x) {
    printf("El valor de la variable '%c' es: %d\n", name, x);
}

int suma_hasta(int n) {
    int res, m;
    m = n;
    res = 0;
    n = 0;

    while (n < m)
    {
        res= n + 1 + res;
        n= n + 1;
    }
    
    return res;
}

int main() {
    int n,n_aux;

    n= pedir_entero('n');
    n_aux = n;

    if (n >= 0)
    {
        n= suma_hasta(n);
        printf("La suma desde 0 hasta %d es %d \n", n_aux,n);
    } else {
        printf("Error, n debe ser no negativo\n");
    }
    
    return 0;
}