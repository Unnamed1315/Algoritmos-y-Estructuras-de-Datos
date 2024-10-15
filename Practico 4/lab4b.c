#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

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
    int x, res;
    int xInput;

    x = pedir_entero('x');
    xInput = x;
    assert(x == xInput);

    if (x >= 0)
    {
        res = x;
    } else {
        res = -x;
    }
    
    printf("El valor absoluto de 'x' es %d \n", res);
    assert(res == abs(x));

    return 0;
}