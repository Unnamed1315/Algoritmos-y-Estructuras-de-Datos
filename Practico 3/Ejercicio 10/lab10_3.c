#include <stdio.h>

int pedir_entero(char name) {
    int valor;

    printf("Por favor, ingrese un valor para la variable '%c':", name);
    scanf("%d", &valor);

    return valor;
}

int main() {
    int x,y,z,m;
    
    x = pedir_entero('x');
    y = pedir_entero('y');
    z = pedir_entero('z');
    m = pedir_entero('m');

    if (x<y) {
        m=x;
    } else if (x>=y) {
        m=y;
    }

    if (m<z) {
        // skip
    } else if (m>=z) {
        m=z;
    }

    printf("x: %d \n", x);
    printf("y: %d \n", y);  
    printf("z: %d \n", z);
    printf("m: %d \n", m);  

    return 0;
}