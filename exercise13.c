#include <stdio.h>

int main(){
    int myNumbers[4] = {25, 50, 75, 100};

    for(int i =0; i < sizeof(myNumbers)/4; i++) {
        printf("The contents of the %d element are: %d\n",(i + 1), *(myNumbers + i));
        printf("The address of the %d element is: %p\n", (i+1), &myNumbers[i]);
    }

    return 0;
}