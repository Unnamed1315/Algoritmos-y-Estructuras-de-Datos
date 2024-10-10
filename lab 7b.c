#include <stdio.h>

int main()  {
    int n, numero_actual, resultado;

    printf("Ingrese un valor para n\n");
    scanf("%d", &n);

    resultado = 1;
    numero_actual = n;

    do
    {
        resultado = resultado * numero_actual;
        numero_actual = numero_actual - 1;
    } while (numero_actual >= 1);
    
    printf("El resultado es: %d\n",resultado);
    return 0;
}