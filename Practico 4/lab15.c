#include <stdio.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

struct asoc {
 clave_t clave;
 valor_t valor;
};

bool asoc_existe(int tam, struct asoc a[], clave_t c) {
    struct asoc var;
    bool res;
    int pos;

    res = false;
    pos = 0;

    while (pos < tam && !res)
    {   
        var = a[pos];
        res = res || (c ==  var.clave);
        pos++;
    }
    
    return res;
}

void pedir_arreglo(int tam, struct asoc a[]){
    int i = 0;
    struct asoc var;
    while (i < tam)
    {
        printf("Ingrese los datos de la clave %d.\n", i + 1);
        printf("Ingrese un caracter: ");
        scanf(" %c", &var.clave);
        printf("Ingrese un valor: ");
        scanf("%d", &var.valor);
        printf("\n");
        a[i] = var;
        i++;   
    }
}

int main(){
    int tamaño;
    clave_t clave;
    tamaño = 0;
    while (tamaño <= 0)
    {
        printf("Por favor, ingrese un número positivo para el tamaño del arreglo.\n");
        scanf("%d", &tamaño);
    }
    struct asoc arreglo[tamaño];

    pedir_arreglo(tamaño, arreglo);
    printf("Escriba el caracter a comparar:\n");
    scanf(" %c", &clave);

    if (asoc_existe(tamaño, arreglo, clave))
    {
        printf("La clave existe.\n");
    } else {
        printf("La clave no existe.\n");
    }

    return 0;
}