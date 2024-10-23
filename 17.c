#include <stdio.h>

int main() {
    char n;
    printf("Introduce un caracter: ");
    scanf("%s", &n);
    if ( (int)n >= 48 && (int)n < 58 ) {
        printf("%c Es un numero", n);

    }
    else if ((int)n == 65 || (int)n == 69 || (int)n == 73 || (int)n == 79 || (int)n == 85 || (int)n == 97 || (int)n == 101 || (int)n == 105 || (int)n == 111 || (int)n == 117) {
        printf("%c es una vocal.", n);
    }
    else if ((int)n >= 65 && (int)n <= 90 || (int)n >= 97 && (int)n <= 122) {
        printf("%c es una consonante.", n);
    }
    else if (n >= 0 && n <= 255){
        printf("%c es un caracter especial.", n);
    }
    else {
        printf("Has introducido más de un caracter.");
    }
}