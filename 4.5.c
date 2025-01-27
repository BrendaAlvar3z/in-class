#include <stdio.h>

struct House {
    char address[50];
    int squareFeet;
    int numBedrooms;
    int numBathrooms;
    double price;
};

int main() {
    struct House house1 = {"Lakeland, Florida", 10000, 3, 2, 300000};
    struct House house2 = {"New York City, New York", 1500, 1, 1, 50000};
    struct House house3 = {"Seattle, Washington", 5880, 2, 1, 150000};

    printf("%s %d %d %d $%.2lf\n", house1.address, house1.squareFeet, house1.numBedrooms, house1.numBathrooms, house1.price);
    printf("%s %d %d %d $%.2lf\n", house2.address, house2.squareFeet, house2.numBedrooms, house2.numBathrooms, house2.price);
    printf("%s %d %d %d $%.2lf\n", house3.address, house3.squareFeet, house3.numBedrooms, house3.numBathrooms, house3.price);

    return 0;
}
