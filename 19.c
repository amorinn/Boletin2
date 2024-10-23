#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char mes[100];
    int año;

    printf("Diga el mes: ");
    scanf("%s", mes);


    if (strcmp(mes, "Enero") == 0 || strcmp(mes, "Marzo") == 0 || strcmp(mes, "Mayo") == 0 ||
        strcmp(mes, "Julio") == 0 || strcmp(mes, "Agosto") == 0 || strcmp(mes, "Octubre") == 0 ||
        strcmp(mes, "Diciembre") == 0) {
        printf("%s tiene 31 días.\n", mes);
        }
    else if (strcmp(mes, "Febrero") == 0) {
        printf("Introduzca el año: ");
        scanf("%d", &año);


        if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
            printf("%s tiene 29 días.\n", mes);
        }
        else {
            printf("%s tiene 28 días.\n", mes);
        }
    }
    else {

        printf("%s tiene 30 días.\n", mes);
    }
    return 0;
}