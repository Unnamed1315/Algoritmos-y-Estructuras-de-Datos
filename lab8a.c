#include <stdio.h>

int main()  {
    int x,y,i;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para i\n");
    scanf("%d", &i);

    i=0;

    do
    {
        x = x - y;
        i = i + 1;
    } while (x >= y);
    
    printf("x: %d \n", x);
    printf("y: %d \n", y);
    printf("i: %d \n", i);

    return 0;
}