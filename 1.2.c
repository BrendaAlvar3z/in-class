//calculate area of a rectangle

#include <stdio.h>

int main() 
{
    int width;
    int height; 

    printf("Enter the width and the height of the rectangle: ");
    scanf("%d %d", &width, &height);
    
    printf("The area of the rectangle is : %d\n", width * height);
    return 0;
}