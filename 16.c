#include <stdio.h>

int main(void) {
    char nombre[100];
    char apellido[100];
    int edad;

    printf("Nombre: ");
    scanf("%s %s", nombre, apellido);


    printf("Edad: ");
    scanf("%d", &edad);

    if (edad > 0 && edad < 32) {
        printf("%s %s es JOVEN (<32)\n", nombre, apellido);
    }
    else if (edad >= 32 && edad < 75) {
        printf("%s %s es ADULTO (32-74)\n", nombre, apellido);
    }
    else if (edad >= 75) {
        printf("%s %s es ANCIANO (>=75)\n", nombre, apellido);
    }
    else {
        printf("La edad no puede ser negativa\n");
    }

    return 0;
}