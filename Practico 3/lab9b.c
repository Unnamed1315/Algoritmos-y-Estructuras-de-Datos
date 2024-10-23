#include <stdio.h>

int main()  {
    int i, c;
    int array[4] = {12,-9,10,-1};
  
    printf("Ingrese un valor para i\n");
    scanf("%d", &i);
    printf("Ingrese un valor para s\n");
    scanf("%d", &c);

    i = 0;
    c = 0;

    while (i < 4)
    {
        if (array[i]>0) {
            c = c + 1;
        } else if (array[i]<=0) {
            
        };
        i = i + 1;
    };
    
    printf("i: %d \n", i);
    printf("c: %d \n", c);

    return 0;
}