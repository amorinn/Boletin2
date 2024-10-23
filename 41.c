#include <stdio.h>
#define N 1000
int main() {
    int n;
    for (n = 1; n <= N; n++) {
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < i; j++) {
                if (n*n == i*i + j*j) {
                    printf("%4d^2 = %4d^2 + %4d^2\n", n, i, j);
                }
            }
        }

        }
}