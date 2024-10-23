#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 1;
    while (j <= 8) {
        while (i <= 10){
            printf("%d x %d = %d\n",j, i, i*j);
            i++;}
        i = 0;
        j++;
    }
}