//create a program that finds the lowest age among the different ages below

#include <stdio.h>

int main() {
    
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int smallest = ages[0]; 
    int i;

    for(i = 1; i < sizeof(ages)/4; i++) {
        if (ages[i] < smallest) {
            smallest = ages[i];
        }
    }

    printf("The smallest age is: %d\n", smallest);
}