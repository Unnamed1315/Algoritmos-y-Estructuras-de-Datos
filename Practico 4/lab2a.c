#include <stdio.h>

int pedir_entero(char name) {
    int valor;

    printf("Por favor, ingrese un valor para la variable '%c':", name);
    scanf("%d", &valor);

    return valor;
}

void imprimir_entero (char name, int x) {
    printf("El valor de la variable '%c' es: %d\n", name, x);
}

int main() {
    int x,y,x_aux;

    x = pedir_entero('x');
    y = pedir_entero('y');
    x_aux = x;

    x = x_aux + 1;
    y = x_aux + y;

    imprimir_entero('x', x);
    imprimir_entero('y', y);

    return 0;
}