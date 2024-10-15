#include <stdio.h>
#include <stdbool.h>

char pedir_char(void) {
    char letra;

    printf("Por favor, ingrese una caracter\n");
    scanf("%c", &letra);

    return letra;
}

bool es_vocal(char letra) {
    if (letra == 'a' || letra == 'A' ||
        letra == 'e' || letra == 'E' ||
        letra == 'i' || letra == 'I' ||
        letra == 'o' || letra == 'O' ||
        letra == 'u' || letra == 'U') {
            return true;
        } else {
            return false;
        }
}

int main() {
    char letra;
    letra = pedir_char();

    if (es_vocal(letra)) {
        printf("El caracter es una vocal.\n");
    } else {
        printf("El caracter no es una vocal.\n");
    }

    return 0;
}