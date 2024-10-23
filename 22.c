#include <stdio.h>

int main(void) {
    int a = 0;
    // pares
    int np = 0;
    int sumap = 0;
    //impares
    int ni = 1; int sumai = 0;

    while(a < 100){
//suma de pares
        np = np + 2;
        sumap = sumap + np;
//suma de impares
        ni = ni + 2;
        sumai = sumai + ni;
        a++;
    }
    printf("La suma de los 100 primeros numeros pares es %d\n", sumap);
    printf("La suma de los 100 primeros numeros impares es %d\n", sumai);
}