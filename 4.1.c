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

    // //seek and tell PRACTICE

    // FILE* fp;
    // fp = fopen("hello.txt", "r");

    // fseek(fp, 0, SEEK_END);

    // printf("%ld\n", ftell(fp));

    return 0;
}