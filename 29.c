#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[1000];  // Buffer para la entrada del usuario
    float num, suma = 0.0;
    int contador = 0;

    printf("Numeros; ");
    // Lee la entrada del usuario
    fgets(input, sizeof(input), stdin);

    // Separa la cadena en tokens (números) usando espacios como delimitadores
    char *token = strtok(input, " ");

    while (token != NULL) {
        // Convierte el token (cadena) a número flotante
        num = atof(token);
        suma += num;
        contador++;

        // Lee el siguiente token
        token = strtok(NULL, " ");
    }

    // Calcula y muestra la media aritmética si se introdujeron números
    if (contador > 0) {
        float media = suma / contador;
        printf("La media aritmética de los números introducidos es: %.2f\n", media);
    } else {
        printf("No se introdujeron números válidos.\n");
    }

    return 0;
}
