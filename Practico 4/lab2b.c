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
    int x,y,z,x_aux,y_aux;

    x = pedir_entero('x');
    y = pedir_entero('y');
    z = pedir_entero('z');

    x_aux = x;
    y_aux = y;

    x = y_aux;
    y = x_aux + y_aux + z;
    z = y_aux + x_aux;

    imprimir_entero('x', x);
    imprimir_entero('y', y);
    imprimir_entero('z', z);

    return 0;
}