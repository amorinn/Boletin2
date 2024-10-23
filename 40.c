#include <stdio.h>

int main() {
    int n;
    double e = 1;
    double nexp = 1;
    double fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= 50; i++) {
        nexp *= n;
        fact *= i;
        e += nexp / fact;
    }

    printf("%.4lf\n", e);

    return 0;
}