//print even numbers between 0 and 10 using while loop

#include <stdio.h>

int main() {
    int i = 0;

    while(i < 11) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}