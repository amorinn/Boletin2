#include <stdio.h>

int main(void) {
    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);
    if (c == 'A') {
        printf("Adolescente");
    }
    else if (c == 'B') {
        printf("Bebé");
    }
    else if (c == 'M') {
        printf("Mujer");
    }
    else if (c == 'H') {
        printf("Hombre");
    }
    else {
        printf("Su caracter no corresponde con ningun grupo.");
    }

}
