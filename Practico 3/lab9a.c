#include <stdio.h>

int main()  {
    int i, s;
    int array[4] = {2,10,10,-1};
  
    printf("Ingrese un valor para i\n");
    scanf("%d", &i);
    printf("Ingrese un valor para s\n");
    scanf("%d", &s);

    i = 0;
    s = 0;

    do
    {
        s = s + array[i], i = i + 1;
    } while (i < 4);
    
    printf("i: %d \n", i);
    printf("s: %d \n", s);

    return 0;
}