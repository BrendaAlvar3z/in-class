#include <stdio.h>

int main() {

    // //initialize the file
    FILE *fptr; 

    // //create or open a file in writing mode
    // fptr = fopen("filename.txt", "w");

    // //write in the file
    // fprintf(fptr, "Some text");

    // //close the file
    // fclose(fptr);

    // //append text to the file

    // fptr = fopen("filename.txt", "a");

    // fprintf(fptr, "\nHi everybody!");

    // fclose(fptr);


    //read the file (one line)

    // fptr = fopen("filename.txt", "r");

    // char myString[100];

    // fgets(myString, 100, fptr);

    // printf("%s", myString);

    // fclose(fptr);

    //read the file (multiple lines)

    fptr = fopen("filename.txt", "r");

    char myString[100];

    while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
    }

    fclose(fptr);

    return 0;
}