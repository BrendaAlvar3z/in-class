//ask user for the number of students. allocate memory to store scores (out of 100) of all students
//ask user to enter score for all students and save it to the memory.
//write scores in the memory to a file in reverse order, each score on a line. Free memory and close file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* filePointer;
    int numStudents;
    int *scores;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    scores = calloc(numStudents, sizeof(*scores));

    if (scores == NULL) {
        fprintf(stderr, "memory allocation failed\n");
        return 1; 
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Enter the student score: ");
        scanf("%d", &scores[i]);
    }
    
    filePointer = fopen("ScoresFile.bin", "wb");

    if (filePointer == NULL) {
        fprintf(stderr, "failed to open file for writting\n");
        free(scores);
        return 1; 
    }

    for (int i = numStudents - 1; i >= 0; i--) {
        putw(scores[i], filePointer);
    }

    free(scores);
    fclose(filePointer);

    //READING FILE TO TEST IF CODE IS WORKING
    // filePointer = fopen("ScoresFile.bin", "rb");

    // if (filePointer == NULL) {
    //     fprintf(stderr, "failed to open file\n");
    //     return 1; 
    // }

    // for (int i = 0; i < numStudents; i++) {
    //     int score = getw(filePointer);
    //     printf("%d\n", score);
    // }

    // fclose(filePointer);

    return 1;
}