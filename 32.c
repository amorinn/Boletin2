
#include <stdio.h>

int main() {
    int n, p, r, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Introduce el exponente: \n");
    scanf("%d", &p);
    r = n;
    while(i < p) {
        r = r * n;
        i++;
    }
    printf("El resultado es %d", r);
}