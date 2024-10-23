#include <stdio.h>

int main(void) {
    int i = 0;
    int j;
    printf("Di el numero; ");
    scanf("%d", &j);
    while (i <= 10) {
        printf("%d x %d = %d\n", j, i, i*j);
        i++;
    }
}