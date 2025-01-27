//finish the program to Open a File, Read and Print, and Close the File

#include <stdio.h>

int main()
{
    FILE* filePointer;

    char dataToBeRead[50];

    filePointer = fopen("GfgTest.c", "r");

    if (filePointer == NULL) {
        printf("GfgTest.c file failed to open.");
    }
    else {
        printf("The file is now opened.\n");

        
        char myString[100];

        fgets(myString, 100, filePointer);

        printf("%s", myString);

    }
    fclose(filePointer);

    return 0;
}