#include <stdio.h>
int main() {
    int n;
    int sum=0;
    scanf("%d", &n);

    for(int i=1; i<n; i++) {
        if (n % i == 0) {
            sum += i;
        }

    }
    printf("Suma igual = %d\n", sum);
    if (sum>n) {
        printf("El numero es abundante");
    }
    else if (sum==n) {
        printf("El numero es perfecto");
    }
    else if (sum<n) {
        printf("El numero es deficiente");
    }
}