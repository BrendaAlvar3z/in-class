//write a program that prints the multiplication table using nested loop

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i < 11; i++) {
        for(j = 1; j < 11; j++) {
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}