#include <stdio.h>

int main() {
    int i = 0;
    int s = 0;
    while(i <= 100) {
        s = s + i;
        i++;
    }
    printf("Bucle while = %d\n", s);

    s = 0;
    for (i = 0; i <= 100; i++) {
    s = s + i;}
    printf("Bucle for = %d\n", s);

    s = 0;
    i = 0;
    do {s = s + i;
        i++;
    } while (i <= 100);
    printf("Bucle do = %d\n", s);
}