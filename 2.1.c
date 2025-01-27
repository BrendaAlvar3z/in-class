//countdown from 10 to 1 and output "Happy New Year!" using while loop

#include <stdio.h>

int main() {
    int i = 10; 
    
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }

    printf("Happy New Year!\n");
    return 0;
}