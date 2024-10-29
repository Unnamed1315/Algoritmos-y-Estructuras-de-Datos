#include <stdio.h>
#include <float.h>

typedef struct _persona {
    char *nombre;
    int edad;
    float altura;
    float peso;
} persona_t;

float peso_promedio(unsigned int longitud, persona_t arr[]){
    struct _persona datos;
    float peso_prom;
    float sum = 0;
    unsigned int pos = 0;

    while (pos < longitud)
    {
        datos = arr[pos];
        sum = datos.peso + sum;
        pos++;
    }
    
    return (sum/longitud);
}

int min(int a, int b){
    int res;

    if ( a > b)
    {
        res = b;
    } else {
        res = a;
    };

    return res;
}

int max(int a, int b){
    int res;

    if ( a < b)
    {
        res = b;
    } else {
        res = a;
    };

    return res;
}

persona_t persona_de_mayor_edad(unsigned int longitud, persona_t arr[]){
    unsigned int i = 0;
    persona_t mayor = arr[i];
    while (i < longitud)
    {   
        if (mayor.edad < arr[i].edad) mayor = arr[i];
        i++;
    }

    return mayor;
}

persona_t persona_de_menor_altura(unsigned int longitud, persona_t arr[]){
    unsigned int i = 0;
    persona_t menor_altura = arr[i];
    while (i < longitud)
    {   
        if (menor_altura.altura < arr[i].altura) menor_altura = arr[i];
        i++;
    }

    return menor_altura;
}

int main(void) {
    persona_t p1 = {.nombre="Paola", .edad=21, .altura=1.85, .peso=75};
    persona_t p2 = {.nombre="Luis", .edad=54, .altura=1.75, .peso=69};
    persona_t p3 = {.nombre="Julio", .edad=40, .altura=1.70, .peso=80};
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};
    printf("El peso promedio es %f\n", peso_promedio(longitud, arr));
    persona_t p = persona_de_mayor_edad(longitud, arr);
    printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
    p = persona_de_menor_altura(longitud, arr);
    printf("El nombre de la persona con menor altura es %s\n", p.nombre);
    printf("\n");
    return 0;
}