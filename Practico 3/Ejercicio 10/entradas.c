#include <stdio.h>

int pedir_entero(char name);
void imprimir_entero (char name, int x);


int pedir_entero(char name) {
    int valor;

    printf("Por favor, ingrese un valor para la variable '%c':", name);
    scanf("%d", &valor);

    return valor;
}

void imprimir_entero (char name, int x) {
    printf("El valor de la variable '%c' es: %d\n", name, x);
}

int main () {
    int n;
    n = pedir_entero('n');
    imprimir_entero('n', n);
    
    return 0;
}