#include <stdio.h>
#include <stdbool.h>

int main()  {
    int x,i;
    bool res;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para i\n");
    scanf("%d", &i);
    printf("Ingrese un valor para res\n");
    scanf("%d", &res);

    i=2;
    res= true;

    do
    {
        res = res && (x%i != 0);
        i = i + 1;
    } while (i<x && res);
    
    printf("x: %d \n", x);
    printf("y: %d \n", i);
    printf("i: %d \n", res);

    return 0;
}