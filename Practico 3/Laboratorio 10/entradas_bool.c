#include <stdio.h>
#include <stdbool.h>

bool pedir_booleano(char name);
void imprimir_booleano(char name, bool x);

bool pedir_booleano(char name) {
    int x;

    printf("Por favor, ingrese un valor para el booleano '%c' (0 o 1): \n",name);
    scanf("%d",&x);

    return x;
}

void imprimir_booleano(char name, bool x) {

    if (x == 1) {
        printf("El valor del booleano '%c' es verdadero\n", name);
    } else {
        printf("El valor del booleano '%c' es falso\n",name);
    }
}

int main() {
    bool x;

    x = pedir_booleano('n');
    imprimir_booleano('n',x);

    return 0;
}

