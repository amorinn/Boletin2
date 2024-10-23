#include <stdio.h>

int main() {
    int n;
    int s = 0;
    scanf("%d", &n);
    while (n != 0) {
        s = s + n;
        scanf("%d", &n);
    }
    printf("La suma es %d", s);
}