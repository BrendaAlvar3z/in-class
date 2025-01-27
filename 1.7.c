//write a program to determine if a number entered by user is odd or even

#include <stdio.h>

int main() {
    int userNumber;

    printf("Enter a number: ");
    scanf("%d", &userNumber);

    (userNumber % 2 == 0) ? printf("The number is even\n") : printf("The number is odd\n");
    return 0;
}