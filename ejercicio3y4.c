#include <stdio.h>

int main()  {
    int x,y;

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);

    //a
    /*
    x=5;
    printf("%d \n", x);
    */

    //b
    /*
    x=x+y;
    printf("x: %d \n", x);
    y=y+y;
    printf("y: %d \n", y);
    */

    //c
    /*
    y=y+y;
    printf("y: %d \n", y);
    x=x+y;
    printf("x: %d \n", x);
    */

    //d
    /*
    y=y+y,x=x+y;
    printf("x: %d \n", x);
    printf("y: %d \n", y);
    */
    return 0;
}