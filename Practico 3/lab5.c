#include <stdio.h>

int main()  {
    int x,y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);

    if (x>=y) {
        x=0;
    } else if (x<=y) {
        x=2;
    }

    printf("x: %d \n", x);
    printf("y: %d \n", y);  

    return 0;
}