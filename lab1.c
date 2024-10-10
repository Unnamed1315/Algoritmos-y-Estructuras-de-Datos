#include <stdio.h>
#include <stdbool.h>

int main()  {
    int x,y,z;
    int calc1, calc2, calc4;
    bool calc3, calc5;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);

    calc1 = x + y + z;
    calc2 = z * z + y * 45 - 15 * x;
    calc3 = y - 2 == (x * 3 + 1) % 5;
    calc4 = y / 2 * x;
    calc5 = y < x * z;

    printf("El resultado 1 es %d\n", calc1);
    printf("El resultado 2 es %d\n", calc2);
    printf("El resultado 3 es %d\n", calc3);
    printf("El resultado 4 es %d\n", calc4);
    printf("El resultado 5 es %d\n", calc5);
    
    return 0;

}