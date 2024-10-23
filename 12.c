#include <stdio.h>
int main() {
    int a, b, c;
    int dividendo;
    int divisor;
    printf("Introduce el primer numero: ");
    scanf("%d", &a);
    printf("Introduce el segundo numero: ");
    scanf("%d", &b);
    printf("Introduce el tercer numero: ");
    scanf("%d", &c);
    if (a > b) {
        if (a > c) {
            dividendo = a;
        }
    }
    if (b > c) {
        if (b > a) {
            dividendo = b;
        }
    }
    else {
        dividendo = c;
    }
    if (a < b) {
        if (a < c) {
            divisor = a;
        }
    }
    if (b < c) {
        if (b < a) {
            divisor = b;
        }
    }
    else {
        divisor = c;
    }

if (divisor == 0) {
    printf("El divisor no puede ser 0");
}
    else {
        printf("%5d dividido entre |entre %-5d\n", dividendo, divisor);
        printf("                   -----------\n");
        printf("            R:%-5d C:%-5d", dividendo%divisor, dividendo/divisor);
}

}