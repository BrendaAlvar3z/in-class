#include <stdio.h>

//write a program that counts to 100 by tens using for loop

int main() {
    int i;

    for (i = 0; i < 101; i+=10) {
        printf("%d\n", i);
    }

    return 0;
}