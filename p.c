#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    while(i < 255){
        while(j <= 10) {
            printf("%5d%5c", i, i);
            j++;
            i++;
        }
        printf("\n");
        j=0;


    }
}