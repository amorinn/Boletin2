#include <stdio.h>

int main(void) {
    int n;
    int cn = 0;
    int a;
    int ca = 0;

    printf("Introduce un numero entero positivo de 3 cifras: ");
    scanf("%d", &n);
    printf("Introduce un nummero entero positivo de 1 cifra: ");
    scanf("%d", &a);
    int temp_a = a;
    int temp_n = n;

    if (n < 0) {
        temp_n = -temp_n;
    }
    if (n == 0) {
        cn = 1;
    }
    else {
        while (temp_n > 0) {
            temp_n= temp_n / 10;
            cn++;
        }
    }
    if (a < 0) {
        temp_a = -temp_a;
    }
    if (a == 0) {
        ca = 1;
    }
    else {
        while (temp_a > 0) {
            temp_a = temp_a / 10;
            ca++;
        }
    }
    if (ca != 1  || cn != 3) {
        printf("Las cifras introducidas son incorrectas.");
    }
    else {
        printf("%6d\n", n);
        printf("x%5d\n", a);
        printf("--------\n");
        printf("%6d\n", n*a);
    }
 }
