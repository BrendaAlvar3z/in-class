//get a string input by user

#include <stdio.h>

int main() {

    // char name[30];

    // printf("Enter your name: ");
    // scanf("%s", name);

    // printf("Hello %s\n", name);

    int myAge = 22;
    int* ptr = &myAge;

    printf("%d\n", myAge);
    printf("%p\n", &myAge);
    printf("%p\n", ptr);

    return 0;
}
