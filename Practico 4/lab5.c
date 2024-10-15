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

    do
    {
        res= n + 1 + res;
        n= n + 1;
    } while (n != m);
    
    return res;
}

int main() {
    int n;

    n= pedir_entero('n');   
    imprimir_entero('n', n);
    n= suma_hasta(n);
    printf("La suma desde 0 hasta 'n' es %d \n", n);

    return 0;
}