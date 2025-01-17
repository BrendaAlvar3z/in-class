#include <stdio.h>

// int main() {
//     int i, j;

//     for (i = 1; i <=2; ++i) {
//         printf("Outer: %d\n", i);

//         for (j = 1; j <=3; ++j) {
//             printf(" Inner: %d\n", j);
//         }
//     }

//     return 0;
// }

//write a program that counts to 100 by tens using for loop

int main() {
    int i;

    for (i = 0; i < 101; i+=10) {
        printf("%d\n", i);
    }

    return 0;
}