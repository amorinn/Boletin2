#include <stdio.h>

#include <stdio.h>

int main() {
    int a21 = 2000;
    int a20 = 2000;
    char a;

    // First loop: increment a21 by 4 until it's >= 3000
    while (a21 < 3000) {
        printf("%d \n", a21);
        a21 += 4;
    }

    getchar();
    // Second loop: decrement a20 by 4 until it's <= 1900
    while (a20 > 1900) {
        a20 -= 4;
        printf("%d \n", a20);
    }

    return 0;
}
