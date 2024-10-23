#include <stdio.h>

int num;
int main() {
    printf("Introduzca un numero: ");
    scanf("%d", &num);
    if (num%2 == 0) {
        printf("El numero es par.");
    }
    else {
        printf("El numero es impar.");
    }
}