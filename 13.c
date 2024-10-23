#include <stdio.h>

int main() {
    int a, b, c;
    printf("Introduce el primer lado del triangulo: ");
    scanf("%d", &a);
    printf("Introduce el segundo lado del triangulo: ");
    scanf("%d", &b);
    printf("Introduce el tercer lado del triangulo: ");
    scanf("%d", &c);
    if (a == b && a == c) {
        printf("El triangulo es equilatero.");
    }
    else {
        if (a == b || b == c || c == a) {
            printf("El triangulo es isosceles");

        }
        else {
            printf("El triangulo es escaleno");
        }

    }
}