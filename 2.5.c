//create a program that calculates the average of different ages below

#include <stdio.h>

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int totalOfAges;
    float average;

    for(int i = 0; i < sizeof(ages)/4; i++) {
        totalOfAges += ages[i];
    }

    average = (float)totalOfAges / (sizeof(ages)/4);

    printf("%.2f\n", average);
    return 0;
}