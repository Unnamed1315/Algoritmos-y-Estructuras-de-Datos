#include <stdio.h>

int pedir_entero(char name) {
    int valor;

    printf("Por favor, ingrese un valor para la variable '%c':\n", name);
    scanf("%d", &valor);

    return valor;
}

void pedir_arreglo(int n_max, int a[]) {
    int i;
    i=0;

    while (i<n_max) {
        printf("Ingrese el elemento %d del arreglo: \n", i);
        scanf("%d", &a[i]);
        i = i + 1;
    }
}

struct comp_t {    
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos(int tam, int a[], int elem) {
    struct comp_t comp;
    int pos;
    
    comp.menores=0;
    comp.iguales=0;
    comp.mayores=0;
    pos = 0;

    while (pos < tam) {
        if (a[pos] > elem) {
            comp.mayores = comp.mayores + 1;
        } else if (a[pos] == elem){
            comp.iguales = comp.iguales + 1;
        } else {
            comp.menores= comp.menores + 1;
        }
        pos = pos + 1;
    }
    
    return comp;
}

void imprime_resultado (struct comp_t d, int n){
    printf("El arreglo tiene %d elementos mayores a %d.\n",d.mayores,n);
    printf("El arreglo tiene %d elementos iguales a %d.\n",d.iguales,n); 
    printf("El arreglo tiene %d elementos menores a %d.\n",d.menores,n); 
}

int main(){
    int n, tamaño;
    printf("Por favor, ingrese el tamaño máximo del arreglo\n");
    scanf("%d", &tamaño);
    int arreglo[tamaño];

    pedir_arreglo(tamaño, arreglo);
    n = pedir_entero('n');

    imprime_resultado(cuantos(tamaño, arreglo, n),n);

    return 0;
}