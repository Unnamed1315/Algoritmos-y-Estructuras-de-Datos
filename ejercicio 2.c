#include <stdio.h>
#include <stdbool.h>

int main()  {
    int x,y,z;
    bool b, w;
    
    x = 4;
    y = -4;
    z = 8;
    b = false;
    w = false;

    printf("x%%4 == 0: %d \n", x % 4 == 0);
    printf("x+y==0 && y - x == (-1) * z : %d \n", x + y == 0 && y - x == (-1) * z);
    printf("not b %% w : %d \n", !b && w);
    
    return 0;
}