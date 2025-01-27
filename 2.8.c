//write a program to read two numbers from user, and add them using pointers

#include <stdio.h>

int main(){

    int numberOne;
    int numberTwo;

    //get two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &numberOne, &numberTwo);

    int* ptrOne = &numberOne;
    int* ptrTwo = &numberTwo;

    //add them using pointers

    printf("The sum of the two numbers is: %d\n", (*ptrOne + *ptrTwo));
    
    return 0;
}