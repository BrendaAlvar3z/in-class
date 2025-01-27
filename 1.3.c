//calculate the total cost of 50 items, each $9.99.
//print out num items, cost of ea. item, and total cost (2 decimals)

#include <stdio.h>

int main() 
{
    int items = 50;
    double costPerItem = 9.99;
    double totalCost = (double)items * costPerItem;

    printf("The total cost for %d items each $%.2lf is %.2lf\n", items, costPerItem, totalCost);
    return 0;
}