#include <stdio.h>

int pedir_entero(char name) {
    int valor;

    printf("Por favor, ingrese un valor para la variable '%c':\n", name);
    scanf("%d", &valor);

    return valor;
}

struct div_t {
 int cociente;
 int resto; 
};

void imprime_division ( struct div_t d){
  printf(" El resultado de la división es  q = %d y r = %d\n",d.cociente, d.resto); 
}

struct div_t division(int x, int y){
    struct div_t division;
    division.cociente = 0;
    division.resto = x;

    while (y <= division.resto)
    {
        division.cociente = division.cociente + 1;
        division.resto = division.resto - y;
    }

    return division;
}

int main(){
    int x, y;
    x= pedir_entero('x');
    if (x <= 0)
    {
        printf("El dividendo debe ser mayor o igual a cero.\n");
        return 1;
    }
    y= pedir_entero('y');
    if (y <= 0)
    {
        printf("El divisor debe ser mayor a cero.\n");
        return 1;
    }

    imprime_division(division(x,y));   

    return 0;
}