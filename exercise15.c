//write function to convert temperature in F to C

#include <stdio.h>

void temperatureConversion(int temp) {

    float convertedTemperature = ((float)temp - 32) * .555555555;

    printf("%d degrees fahrenheit in celsius is : %.2lf\n",temp,  convertedTemperature);
}

int main() {

    int userTemp; 
    printf("Enter a temperature in Fahrenheit: ");
    scanf("%d", &userTemp);

    temperatureConversion(userTemp);
    return 0;
}

