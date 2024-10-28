#include <stdio.h>
#include <stdbool.h>

bool es_primo(int N) {
    int m = 2;
    bool res = true;
    bool var2 = true;

    while (m < N && var2)
    {   
        var2 = ( N % m != 0);
        res = res && var2;
        m++;
    }
    
    return res;
}

int nesimo_primo(int N) {
    int m;
    int res2;
    int res = 2;

    m = 1;
    while (m < N)
    {   
        res2 = res + 1;
        while (!es_primo(res2))
        {
            res2++;
        }
        res = res2;
        m++;
    }
    
    return res;
}

int main(){
    int entero;

    entero = 0;
    while (entero <= 0)
    {
        printf("Sea n un número positivo, ingrese que n-esimo número primo quiere calcular. \n");
        scanf("%d", &entero);
    }

    printf("El n-esimo primo es %d\n", nesimo_primo(entero));
    
    return 0;
}