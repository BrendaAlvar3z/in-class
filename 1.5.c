//write a C program that ask user for temperature and output 1 if temperature > 70F
//and <85F, otherwise output 0
//Note: CANNOT USE IF ELSE

#include <stdio.h>

int main() {

    int userTemp; 
    printf("Enter a temperature (in Farenheit): ");
    scanf("%d", &userTemp);

    printf("%d\n", userTemp > 70 && userTemp < 85);

    return 0;
}