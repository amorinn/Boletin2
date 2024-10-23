#include <stdio.h>

int main() {
    int n;
    int sump = 0;
    int sumi = 0;
    scanf("%d", &n);
    while(n != 0) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            sump += n;
        }else {
            sumi += n;
        }
    }
    printf("La suma de los pares es %d\n", sump);
    printf("La suma de los impares pares es %d\n", sumi);
}