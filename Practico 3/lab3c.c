#include <stdio.h>

int main()  {
    int x,y;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);

    y=y+y;
    printf("y: %d \n", y);
    x=x+y;
    printf("x: %d \n", x);

    return 0;
}