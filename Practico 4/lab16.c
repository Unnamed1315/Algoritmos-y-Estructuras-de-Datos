#include <stdio.h>
#include <stdbool.h>

bool es_primo(int N) {
    int m = 2;
    bool res = true;

    while (m < N)
    {
        res = res && ( N % m != 0);
        m++;
    }
    
    return res;
}

int nesimo_primo(int N) {
    int m;
    int res2;
    int res;

    m = 1;
    res = 2;
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
    int res;

    entero = -1;
    while (entero <= 0)
    {
        printf("Sea n un número positivo, ingrese que n-esimo número primo quiere calcular. \n");
        scanf("%d", &entero);
    }

    res = nesimo_primo(entero);
    printf("El n-esimo primo es %d\n", res);
    
    return 0;
}