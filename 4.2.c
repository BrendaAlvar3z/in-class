//read the file hello and print out the contents

#include <stdio.h>

int main() 
{
    FILE *fptr;
        //read the file

    fptr = fopen("hello.txt", "r");

    char contents[100];

    if(fptr != NULL) {
        while(fgets(contents, 100, fptr)) {
            printf("%s", contents);
        }
    }
    else {
        printf("The file doesn't exist");
    }
}