#include <stdio.h>
#include <assert.h>

int pedir_entero(char name) {
    int valor;

    printf("Por favor, ingrese un valor para la variable '%c':\n", name);
    scanf("%d", &valor);

    return valor;
}

void imprimir_entero (char name, int x) {
    printf("El valor de la variable '%c' es: %d\n", name, x);
}

int main() {
    int x,y,res;
    int xInput, yInput;

    x = pedir_entero('x');
    y = pedir_entero('y');
    xInput = x;
    yInput = y;

    assert(x == xInput && y == yInput);

    if ( x >= y)
    {
        assert(x >= y);
        res = y;
    } else {
        assert(x < y);
        res = x;
    };

    assert( res == x );

    printf("El mínimo entre 'x' e 'y' es %d \n", res);
    return 0;
}