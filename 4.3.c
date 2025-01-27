//finish the program so dataToBeWritten can be written to the file

//fprintf use formatted string and variable arguments list to print output to the file
//fputs prints the while line in the file and a newline at the end
//fputc prints a single character into the file
//fputw prints a number to the file
//fwrite write the specified amount of bytes to the binary file

//reading from file
//fscanf use formatted string and variable arugments list to take input from a file
//fgets input the whole line from the file
//fgetsc reads a single character from the file
//fgetw reads a number from the file
//fread reads the specified bytes of data from a binary file


#include <stdio.h>
#include <string.h>

int main() 
{
    FILE* filePointer;

    char dataToBeWritten[50] = "GeeksforGeeks-A Computer"
                               " Science Portal for Geeks";
    filePointer = fopen("GfgTest.c", "w");

    if(filePointer == NULL){
        printf("GfgTest.c file failed to open.");
    }
    else {
        printf("The file is now opened.\n");

        if (strlen(dataToBeWritten) > 0) {
            fputs(dataToBeWritten, filePointer);
        }
    }

    fclose(filePointer);
    return 0;
}