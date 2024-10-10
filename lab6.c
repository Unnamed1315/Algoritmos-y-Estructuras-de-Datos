#include <stdio.h>

int main()  {
    int x,y,z,m;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para x\n");
    scanf("%d", &z);
    printf("Ingrese un valor para y\n");
    scanf("%d", &m);

    if (x<y) {
        m=x;
    } else if (x>=y) {
        m=y;
    }

    if (m<z) {
        //skip
    } else if (m>=z) {
        m=z;
    }

    printf("x: %d \n", x);
    printf("y: %d \n", y);  
    printf("z: %d \n", z);
    printf("m: %d \n", m);  

    return 0;
}