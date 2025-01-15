//write a program to determine if a number entered by user is negative, positive or zero

#include <stdio.h>

int main(){

    int userNumber;
    printf("Enter a number: ");
    scanf("%d", &userNumber);

    (userNumber < 0) ? printf("The number is negative\n") : (userNumber > 0) ? printf("The number is positive\n") : printf("The number is 0\n");
    return 0;
}