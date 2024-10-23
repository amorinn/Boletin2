#include <stdio.h>

int main() {
    int n;
    printf("Ingresa un numero entre 20 y 30: ");
    scanf("%d", &n);
    while (0 == 0) {
        if (n > 30 || n < 20){
            printf("%d no esta entre 20 y 30, prueba otra vez: ", n);
            scanf("%d", &n);

        } else {
            printf("Correcto");
            break;
        }
    }

}