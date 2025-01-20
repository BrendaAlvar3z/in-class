// write a program that declares and initializes a double, an int, and a char.
// next declare and initialize a pointer to each of the three variables. 
// your program should then print the address of, and value stored in, and the memory size (in bytes) of each of the six variables

#include <stdio.h>

int main() {

    //delare and initialize double, int, and char
    double valueOfDouble = 9.99;
    int valueOfInt = 5;
    char valueOfChar = 'a';

    //declare and initialize a pointer to each variable
    double* ptrOfDouble = &valueOfDouble;
    int* ptrOfInt = &valueOfInt;
    char* ptrOfChar = &valueOfChar;

    printf("Value of double: %.2lf, address of double: %p, size of double (in bytes): %lu\n", valueOfDouble, ptrOfDouble, (unsigned long)sizeof(valueOfDouble));

    printf("Value of int: %d, address of int: %p, size of int (in bytes): %lu\n", valueOfInt, ptrOfInt, (unsigned long)sizeof(valueOfInt));

    printf("Value of char: %c, address of char: %p, size of char: %lu\n", valueOfChar, ptrOfChar, (unsigned long)sizeof(valueOfChar));
    
    return 0;
}