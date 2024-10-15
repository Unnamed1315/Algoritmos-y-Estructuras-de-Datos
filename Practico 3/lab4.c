#include <stdio.h>

int main()  {
    int x,y,temp_y;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);

    temp_y = y;
    y = temp_y + temp_y;
    x = x + temp_y;



    printf("x: %d \n", x);
    printf("y: %d \n", y);

    return 0;
}