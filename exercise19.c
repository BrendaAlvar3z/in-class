//create file named hello.txt and write
//Hello,
//How are you?
//My name is...
//What's your name? 

//read the file and print out the content

#include <stdio.h>

int main() {

    FILE *fptr;

    fptr = fopen("hello.txt", "w"); 

    fprintf(fptr, "Hello.\nHow are you?\nMy name is Brenda.\nWhat's your name?\n");

    fclose(fptr);


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

    return 0;
}