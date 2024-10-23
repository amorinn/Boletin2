#include <stdio.h>
    int main() {
        double m = 0;
        double mi = 0;
        int a = 0;
        double i = 0;
        printf("Porfavor ingrese el dinero: ");
        scanf("%lf", &m);
        printf("Porfavor ingrese el tipo de interes(%%): ");
        scanf("%lf", &i);
        mi = m;
        i = (i/100)+1;
        printf("%lf",i);
        while (mi < 2*m) {
            mi*=i;
            a++;
        }
        return a;
    }