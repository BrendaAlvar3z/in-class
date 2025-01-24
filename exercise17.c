//write function to calculate are from radius

#include <stdio.h>
#include <math.h>

void areaOfCircle(int radius) {

    double area = 3.14159 * (pow(radius, 2));
    printf("The area of the circle is : %.2f\n", area);
}

int main() {

    int radius; 
    printf("Enter the radius: ");
    scanf("%d", &radius);

    areaOfCircle(radius);

    return 0;
}