//write a function to calculate are from width and height

#include <stdio.h>

void areaCalculator(float width, float height) {

    printf("The area is %.2lf\n", (width * height));
}

int main() {

    double width;
    double height;

    printf("Enter width and height: ");
    scanf("%lf %lf", &width, &height);

    areaCalculator(width, height);

    return 0;
}